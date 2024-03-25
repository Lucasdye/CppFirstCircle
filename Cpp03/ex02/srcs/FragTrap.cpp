/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 16:59:39 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/22 17:20:56 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/base.hpp"

//-------------------- Methods ----------------------------------------------//
void FragTrap::highFivesGuys()
{
	std::cout << "Fragger " << _name << " FragTrap requests a positive high five! 🖐️"
	<< std::endl;
	return ;
}

void FragTrap::attack(const std::string& target)
{
	if (_energyPoints == 0)
		std::cout << "Fragger " << _name << " has no energy left to attack " << target << " 🪫" << std::endl;
	else if (_hitPoints == 0)
		std::cout << "Fragger " <<_name << " Can't attack " << target << ", he is dead ! 💀" << std::endl;
	else
	{	
		std::cout << "Fragger " << _name << " attacks " <<  target << ", causing "
		<< _attackDamage << " points of damage ! 🩸" << std::endl;
		_energyPoints -= 1;
	}
	return ;
}

//-------------------- Set/Get ----------------------------------------------//
//-------------------- Constructor/Destructor -------------------------------//
FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "Default constructor called for FragTrap " << _name << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const &src): ClapTrap(src)
{ 
	std::cout << "Copy constructor called for FragTrap " << _name << std::endl;
	return ;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor called for FragTrap " << _name << std::endl;
	return ;
}

//-------------------- Operators --------------------------------------------//
FragTrap&		FragTrap::operator=(FragTrap const &instance)//=> & referes to the reference
{	
	std::cout << "Assignment operator called for FragTrap" << std::endl;
	if (this != &instance)//& refers to the address of the reference
	{
		ClapTrap::operator=(instance);
	}
	return (*this);
}