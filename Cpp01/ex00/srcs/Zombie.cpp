/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 19:06:51 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/13 19:06:54 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/base.hpp"

//-------------------- Member funcs -----------------------------------------//
void Zombie::announce()
{
	std::cout << _name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

//-------------------- Set/Get ----------------------------------------------//
void Zombie::setName(std::string name)
{
	_name = name;
	return ;
}

std::string Zombie::getName()
{
	return (_name);
}

//-------------------- Constructor/Destructor -------------------------------//
Zombie::Zombie(std::string name): _name(name)
{
	std::cout << "Default constructor called for Zombie" << std::endl;
	return;
}

Zombie::Zombie(): _name("Zombie")
{
	std::cout << "Default constructor called for Zombie" << std::endl;
	return;
}

Zombie::~Zombie ()
{
	std::cout << "Default destructor called for " << _name <<std::endl;
	return;
}
//-------------------- Operators --------------------------------------------//
