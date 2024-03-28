/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2004/03/20 10:14:18 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/27 11:49:11 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/base.hpp"


//-------------------- Member funcs -------------------------------------------//
void Cat::makeSound() const
{
	if (_type == "Cat")
		std::cout << "Miaouuuuu !" << std::endl;
	else
		std::cout << "* Unknown type *" << std::endl;
	return ;
}
//-------------------- Constructor/Destructor ---------------------------------//
Cat::Cat(): Animal()
{
	std::cout << ITALIC << "Default constructor called for Cat" << END_C << std::endl;
	_type = "Cat";
	return ;
}

Cat::Cat(Cat const &src) : Animal(src)
{
	std::cout << ITALIC << "Copy constructor called for Cat" << END_C << std::endl;
	_type = src._type;
	return ;
}

Cat::~Cat()
{
	std::cout << ITALIC << "Destructor called for Cat" << END_C << std::endl;
	return ;
}

//-------------------- Operators ----------------------------------------------//
Cat&		Cat::operator=(Cat const& instance)
{	
	std::cout << "Assignment operator called for Cat" << std::endl;
	if (this != &instance)
		_type = instance._type;
	return *this;
}


