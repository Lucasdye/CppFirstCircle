/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 19:08:39 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/13 19:08:42 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../incs/base.hpp"

void HumanB::attack()
{
	if (_weapon == NULL)
		std::cout << _name << " attacks with their " << "bare hands" << std::endl;
	else
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) 
{
	_weapon = &weapon;
	return ;
}

HumanB::HumanB(std::string name)  : _name(name), _weapon(NULL)
{
	std::cout << "HumanB Constructor called" << std::endl;
	return ;
}

HumanB::~HumanB()
{
	std::cout << "HumanB destructor called" << std::endl;
	return ;
}