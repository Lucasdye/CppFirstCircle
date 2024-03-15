/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2004/03/20 10:14:22 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/04 17:03:37 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Dog.hpp"
#include "../../../colors.hpp"


//-------------------- Member funcs -------------------------------------------//
//-------------------- Constructor/Destructor ---------------------------------//
Dog::Dog(): Animal()
{
	std::cout << ITALIC << "Default constructor called for Dog" << END_C << std::endl;
	_type = "Dog";
	_ideas = new Brain();
	return ;
}

Dog::Dog(Dog const &src) : Animal(src)
{
	std::cout << ITALIC << "Copy constructor called for Dog" << END_C << std::endl;
	_type = src._type;
	return ;

}

Dog::~Dog()
{
	std::cout << ITALIC << "Destructor called for Dog" << END_C << std::endl;
	delete _ideas;
	return ;
}

//-------------------- Operators ----------------------------------------------//



//-------------------- Set/get ------------------------------------------------//
Brain *Dog::getIdeasPtr()
{
	return (_ideas);
}


