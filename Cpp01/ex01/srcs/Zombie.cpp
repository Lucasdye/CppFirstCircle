/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 19:07:08 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/13 19:07:11 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/base.hpp"

//-------------------- Member funcs ------------------------------------------//
void 		Zombie::announce()
{
	std::cout << _name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

//-------------------- Set/get -----------------------------------------------//
void		Zombie::setName(std::string name)
{
	_name = name;
	return ;
}

std::string Zombie::getName()
{
	return (_name);
}

//-------------------- Cons/Des ----------------------------------------------//
Zombie::Zombie(): _name("empty")
{
	std::cout << ITALIC << "Default constructor called for Zombie" << END_C <<std::endl;
	return;
}

Zombie::~Zombie()
{
	std::cout << ITALIC << "Default destructor called for Zombie" << END_C <<std::endl;
	return;
}
//-------------------- Operators ---------------------------------------------//


