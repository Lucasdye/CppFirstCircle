/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2004/03/20 10:14:18 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/04 14:01:22 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/base.hpp"


//-------------------- Member funcs -------------------------------------------//
//-------------------- Constructor/Destructor ---------------------------------//
Cat::Cat(): Animal()
{
	_type = "Cat";
	std::cout << ITALIC << "Default constructor called for Cat" << END_C << std::endl;
	return ;
}

Cat::Cat(Cat const &src) : Animal(src)
{
	_type = src._type;
	std::cout << ITALIC << "Copy constructor called for Cat" << END_C << std::endl;
	return ;
}

Cat::~Cat()
{
	std::cout << ITALIC << "Destructor called for Cat" << END_C << std::endl;
	return ;
}
//-------------------- Operators ----------------------------------------------//





