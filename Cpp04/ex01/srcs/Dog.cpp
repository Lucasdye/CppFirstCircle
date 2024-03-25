/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2004/03/20 10:14:22 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/25 14:15:08 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/base.hpp"

//-------------------- Member funcs -------------------------------------------//
std::string	Dog::getThought(size_t idx)
{
	return (_brain->getIdea(idx));
}

//-------------------- Constructor/Destructor ---------------------------------//
Dog::Dog(): Animal()
{
	_type = "Dog";
	_brain = new Brain();
	std::cout << ITALIC << "Default constructor called for Dog" << END_C << std::endl;
}

Dog::Dog(Dog const &src) : Animal(src)
{
	std::string *ideasSrc;
	std::string *ideasDst;

	std::cout << ITALIC << "Copy constructor called for Dog" << END_C << std::endl;
	_type = src._type;
	ideasDst = _brain->getIdeas();
	ideasSrc = src._brain->getIdeas();
	for (size_t i = 0; i < 100; i++)
		ideasDst[i] = ideasSrc[i];
	return ;
}

Dog::~Dog()
{
	std::cout << ITALIC << "Destructor called for Dog" << END_C << std::endl;
	delete _brain;
}

//-------------------- Operators ----------------------------------------------//
Dog&	Dog::operator=(Dog const &instance)
{
	std::string *ideasSrc;
	std::string *ideasDst;

	std::cout << "Assignment operator called for Animal" << std::endl;
	if (this != &instance)
	{
		_type = instance._type;
		ideasDst = _brain->getIdeas();
		ideasSrc = instance._brain->getIdeas();
		for (size_t i = 0; i < 100; i++)
			ideasDst[i] = ideasSrc[i];
	}
	return *this;
}


