/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2029/02/20 16:33:47 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/22 17:17:28 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/base.hpp"

// -------------------- Methods ---------------------------------------------//
void	ScavTrap::attack(const std::string &target)
{
	if (_energyPoints == 0)
		std::cout << "Scavenger " << _name << " has no energy left to attack " << target << " 🪫" << std::endl;
	else if (_hitPoints == 0)
		std::cout << "Scavenger " <<_name << " Can't attack " << target << ", he is dead ! 💀" << std::endl;
	else
	{	
		std::cout << "Scavenger "<< _name << " attacks " <<  target << ", causing " 
		<< _attackDamage << " points of damage ! 🩸" << std::endl;
		_energyPoints -= 1;
	}
	return ;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
long long diff;

	if (_guardGate == true)
		diff = static_cast<long long>(_hitPoints) - static_cast<long long>(roundf(amount / 2));
	else
		diff = static_cast<long long>(_hitPoints) - amount;
	if (_hitPoints != 0)
	{
		if (diff <= 0)
		{
				std::cout << _name << " dies from this attack ! 🪦" << std::endl;
				_hitPoints = 0;
		}
		else 
		{	
			if (_guardGate == false)
				_hitPoints = _hitPoints - amount;
			else
			{	
				_hitPoints = _hitPoints - static_cast<long long>(roundf(amount / 2));
				std::cout << _name << " has reduced inflicted damage by half 🛡️" << std::endl;
			}	
			
			std::cout << _name << " has " << _hitPoints << " hitpoints left 🧡" << std::endl;
		}
	}
	else if (_hitPoints == 0)
	{	
		std::cout << _name << " Can't take damages, he already dead ! 💀" 
		<< std::endl;
	}
	return ;
}

void	ScavTrap::guardGate()
{
	if (_guardGate == false && _energyPoints > 0)
	{	
		std::cout << "Scavenger " << _name << " has activated guard gate ability" << std::endl;
		std::cout << "Scavenger " << _name << " reduces taken damages by 50%" << std::endl;
		_guardGate = true;
		_energyPoints -= 1;
	}
	else
	{
		std::cout << "Scavenger " << _name << "'s guard gate ability has been desactivated" << std::endl;
	}
}

//-------------------- Constructor/Destructor -------------------------------//
ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "Default constructor called for ScavTrap	" << _name << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	_guardGate = false;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &src): ClapTrap(src)
{ 
	std::cout << "Copy constructor called for ScavTrap		" << _name << std::endl;
	return ;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Default destructor  called for ScavTrap	" << _name << std::endl;
	return ;
}
//-------------------- Operators --------------------------------------------//

ScavTrap&		ScavTrap::operator=(ScavTrap const &instance)//=> & referes to the reference
{	
	std::cout << "Assignment operator called for ScavTrap" << std::endl;
	if (this != &instance)//& refers to the address of the reference
	{
		ClapTrap::operator=(instance);
		_guardGate = instance._guardGate;
	}
	return (*this);
}