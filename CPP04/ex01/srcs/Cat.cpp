/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2004/03/20 10:14:18 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/04 17:03:25 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Cat.hpp"
#include "../../../colors.hpp"

//-------------------- Member funcs -------------------------------------------//
//-------------------- Constructor/Destructor ---------------------------------//
Cat::Cat(): Animal()
{
	std::cout << ITALIC << "Default constructor called for Cat" << END_C << std::endl;
	_type = "Cat";
	_ideas = new Brain();
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
	delete _ideas;
	return ;
}

//-------------------- Set/get ------------------------------------------------//
Brain *Cat::getIdeasPtr()
{
	return (_ideas);
}

//-------------------- Operators ----------------------------------------------//




