/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2029/02/20 16:33:47 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/01 16:49:09 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/ScavTrap.hpp"
#include "../incs/ClapTrap.hpp"

//-------------------- Constructor/Destructor ---------------------------------//
ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "🤖 Default constructor called for ScavTrap 🤖" << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &src): ClapTrap(src)
{ 
	std::cout << "🤖 Copy constructor called for ScavTrap 🤖" << std::endl;
	return ;
}


ScavTrap::~ScavTrap()
{
	std::cout << "🤖 Destructor called for ScavTrap 🤖" << std::endl;
	return ;
}

//-------------------- Fonctions persos -------------------------------------//
void ScavTrap::attack(const std::string &target)
{
	//std::cout << "hitpoint of attacker " << _hitPoints << std::endl;
	if (_energyPoints > 0 && _hitPoints > 0)
	{	
		std::cout << _name << " shoots his gun at " <<  target << " causing " << _attackDamage << " points of damage !" << std::endl;
		_energyPoints = _energyPoints - 1;
	}
	else if (_energyPoints <= 0)
		std::cout << _name << " has no energy left to attack !" << std::endl;
	else
		std::cout << _name << " can't attack, he's already dead !" << std::endl;
	return ;
}

void ScavTrap::guardGate()
{
	std::cout << _name << "🤖 is now in Gate keeper mode. 🤖" << std::endl;
	return ;
}

