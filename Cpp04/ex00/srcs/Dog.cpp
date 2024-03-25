/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2004/03/20 10:14:22 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/25 10:00:07 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/base.hpp"

//-------------------- Member funcs -------------------------------------------//
//-------------------- Constructor/Destructor ---------------------------------//
Dog::Dog(): Animal()
{
	_type = "Dog";
	std::cout << ITALIC << "Default constructor called for Dog" << END_C << std::endl;
}

Dog::Dog(Dog const &src) : Animal(src)
{
	_type = src._type;
	std::cout << ITALIC << "Copy constructor called for Dog" << END_C << std::endl;
}

Dog::~Dog()
{
	std::cout << ITALIC << "Destructor called for Dog" << END_C << std::endl;
}

//-------------------- Operators ----------------------------------------------//
Dog&	Dog::operator=(Dog const &instance)
{
	std::cout << ITALIC << "Assignment operator called for Dog" << std::endl;
	if (this != &instance)
		_type = instance._type;
	return *this;
}


