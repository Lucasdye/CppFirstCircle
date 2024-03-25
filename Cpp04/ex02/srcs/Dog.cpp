/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2004/03/20 10:14:22 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/25 17:26:59 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/base.hpp"

//-------------------- Member funcs -------------------------------------------//
std::string	Dog::getThought(size_t idx)
{
	return (_brain->getIdea(idx));
}

std::string	Dog::getMainThought()
{
	return (_brain->getMainIdea());
}

void Dog::makeSound() const
{
	std::cout << "Waoufffff !" << std::endl;
	return ;
}

std::string	Dog::getType() const
{
	return (_type);
}
//-------------------- Constructor/Destructor ---------------------------------//
Dog::Dog(): Animal()
{
	std::cout << ITALIC << "Default constructor called for Dog" << END_C << std::endl;
	_type = "Dog";
	_brain = new Brain();
	//srand(static_cast<size_t>(time(0)));
	_brain->setMainIdea(_brain->getIdea(rand() % 100));
}

Dog::Dog(Dog const &src) : Animal(src)
{
	std::cout << ITALIC << "Copy constructor called for Dog" << END_C << std::endl;
	_type = src._type;
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
		if (_brain == NULL)
			std::cout << RED << "the brain pointer is null1" << std::endl;
		if (instance._brain == NULL)
			std::cout << RED << "the brain pointer is null2" << std::endl;
		_type = instance._type;
		ideasDst = _brain->getIdeas();
		ideasSrc = instance._brain->getIdeas();
		for (size_t i = 0; i < 100; i++)
			ideasDst[i] = ideasSrc[i];
	}
	return *this;
}

