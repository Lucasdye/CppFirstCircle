/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 19:08:25 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/14 10:48:14 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../incs/base.hpp"

void HumanA::attack()
{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
	return ;
}

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon)
{
	std::cout << "HumanA Constructor called" << std::endl;
	return ;
}

HumanA::~HumanA() 
{
	std::cout << "HumanA destructor called" << std::endl;
	return ;
}