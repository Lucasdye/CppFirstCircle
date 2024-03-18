/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2029/02/20 14:45:03 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/01 17:07:17 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/ClapTrap.hpp"

//-------------------- Methods ----------------------------------------------//
void ClapTrap::attack(const std::string &target)
{
	if (_energyPoints == 0)
		std::cout << _name << " has no energy left to attack ! 🪫" << std::endl;
	else if (_hitPoints == 0)
		std::cout << _name << " Can't attack, his dead ! 💀" << std::endl;
	else
	{	
		std::cout << _name << " attacks " <<  target << ", causing " << _attackDamage << " points of damage ! 🩸" << std::endl;
		_energyPoints -= 1;
	}
	return ;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	long long diff;

	diff = static_cast<long long>(_hitPoints) - static_cast<long long>(amount);
	std::cout << "diff is : " << diff << std::endl;
	if (diff <= 0)
	{	
		if (_hitPoints != 0)
		{	
			std::cout << _name << " dies from this attack ! 🪦" << std::endl;
			_hitPoints = 0;
		}
		else
			std::cout << _name << " Can't take damages, his already dead ! 💀" << std::endl;
	}
	else
	{
		_hitPoints = _hitPoints - amount;
		std::cout << _name << " has " << _hitPoints << " hitpoints left 🧡" << std::endl;
	}
	return ;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints != 0)
	{	
		_hitPoints += amount;
		_energyPoints -= 1;
		std::cout << _name << " has +" << amount << " hit points 💗" << std::endl;
	}
	else if (_energyPoints == 0)
		std::cout << _name << " has no energy point left to regenerate itself !" << std::endl;
	return ;
}

//-------------------- Constructor/Destructor ---------------------------------//
ClapTrap::ClapTrap(std::string name) :_name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Default constructor called for ClapTrap" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const &src) : _name(src._name), _hitPoints(src._hitPoints), _energyPoints(src._energyPoints), _attackDamage(src._attackDamage)
{
	std::cout << "Copy constructor called for ClapTrap" << std::endl;
	return ;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called for ClapTrap" << std::endl;
	return ;
}

//-------------------- Set/get ----------------------------------------------//
int	ClapTrap::getAttackPoints()
{
	return (_attackDamage);
}

void	ClapTrap::setEnergyPoints()
{
	_energyPoints = _energyPoints + 10;
}

void	ClapTrap::setAttackDamage(int value)
{
	_attackDamage = _attackDamage + value;
}

//-------------------- Operator ---------------------------------------------//

ClapTrap&	ClapTrap::operator=(ClapTrap const &instance)
{
	std::cout << "Assignment operator called for ClapTrap" << std::endl;
	if (this != &instance)
	{
		_name			= instance._name;
		_hitPoints		= instance._hitPoints;
		_energyPoints	= instance._energyPoints;
		_attackDamage	= instance._attackDamage;
		
	}
	return *this;
}



