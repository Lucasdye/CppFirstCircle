/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2004/03/20 10:14:10 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/27 11:56:27 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/base.hpp"

//-------------------- Methods ----------------------------------------------//

void Animal::makeSound() const
{
	std::cout << "*Silence*" << std::endl;
	return ;	
}

//-------------------- Set/Get ----------------------------------------------//
std::string	Animal::getType() const
{
	return (_type);
}

//-------------------- Constructor/Destructor -------------------------------//
Animal::Animal() : _type("Animal")
{
	std::cout << ITALIC << "Default constructor called for Animal" << END_C << std::endl;
	return ;
}

Animal::Animal(Animal const &src)
{
	_type = src._type;
	std::cout << ITALIC << "Copy constructor called for Animal" << END_C << std::endl;
	return ;
}

Animal::~Animal()
{
	std::cout << ITALIC << "Destructor called for Animal" << END_C << std::endl;
	return ;
}

//-------------------- Operators ----------------------------------------------//
Animal&	Animal::operator=(Animal const& instance)
{
	std::cout << "Assignment operator called for Animal" << std::endl;
	if (this != &instance)
		_type = instance._type;
	return *this;
}



