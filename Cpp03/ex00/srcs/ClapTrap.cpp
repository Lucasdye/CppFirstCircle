/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2029/02/20 14:45:03 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/01 11:41:35 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/ClapTrap.hpp"

//-------------------- Member funcs -------------------------------------------//
void ClapTrap::attack(const std::string &target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
		std::cout << _name << " attacks " <<  target << " causing " << _attackDamage << " points of damage !" << std::endl;
	else
		std::cout << _name << "has no energy left to attack !" << std::endl;
	return ;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints > 0)
	{	
		if ((int)(_hitPoints - amount) < 0)
			std::cout << _name << " dies from this attack !" << std::endl;
		else
		{
			std::cout << _name << " has " << _hitPoints << " before taking damages" << std::endl;
			_hitPoints = _hitPoints - amount;
			std::cout << _name << " has " << _hitPoints << " hitpoints left" << std::endl;
		}
	}
	else
		std::cout << _name << " is already dead !" << std::endl;
	return ;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{	
		_hitPoints += amount;
		std::cout << _name << " has " << amount << " regenerated" << std::endl;
	}
	else
		std::cout << _name << " has no energy left to regenerate itself !" << std::endl;
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



