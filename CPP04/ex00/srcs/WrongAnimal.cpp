/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2004/03/20 12:20:32 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/04 14:20:09 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/base.hpp"

//-------------------- Member funcs -----------------------------------------//
void WrongAnimal::makeSound() const
{
	if (_type == "Wrong animal")
		std::cout << "	Miaffff !" << std::endl;
	else
		std::cout << "*Silence*" << std::endl;	
}

//-------------------- Set/Get ----------------------------------------------//
std::string	WrongAnimal::getType() const
{
	return (_type);
}

//-------------------- Constructor/Destructor -------------------------------//
WrongAnimal::WrongAnimal() : _type("Wrong animal")
{
	std::cout << ITALIC << "Default constructor called for WrongAnimal" << END_C << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
	std::cout << ITALIC << "Copy constructor called for WrongAnimal" << END_C << std::endl;
	_type = src._type;
	return ;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << ITALIC << "Destructor called for WrongAnimal" << END_C << std::endl;
	return ;
}

//-------------------- Operators --------------------------------------------//
WrongAnimal&	WrongAnimal::operator=(WrongAnimal const & instance)
{
	std::cout << ITALIC << "Assignment operator called for WrongAnimal" << END_C << std::endl;
	if (this != &instance)
	{
		_type = instance._type;
	}
	return *this;
}


