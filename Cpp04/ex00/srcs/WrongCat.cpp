/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2004/03/20 12:20:37 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/27 10:23:47 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/base.hpp"

//-------------------- Member funcs -----------------------------------------//
//-------------------- Set/Get ----------------------------------------------//
//-------------------- Constructor/Destructor -------------------------------//

WrongCat::WrongCat() : WrongAnimal() 
{
	std::cout << ITALIC << "Default constructor called for WrongCat" << END_C << std::endl;
	_type = "Wrong cat";
	return ;
}

WrongCat::WrongCat(WrongCat const &src) : WrongAnimal(src)
{
	std::cout << ITALIC << "Copy constructor called for WrongCat" << END_C << std::endl;
	return ;
}

WrongCat::~WrongCat()
{
	std::cout << ITALIC << "Destructor called for WrongCat" << END_C << std::endl;
	return ;
}

//-------------------- Operators --------------------------------------------//
WrongCat&		WrongCat::operator=(WrongCat const& instance)
{	
	std::cout << "Assignment operator called for WrongCat" << std::endl;
	if (this != &instance)
		_type = instance._type;
	return *this;
}

