/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2004/03/20 10:14:22 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/27 12:15:12 by lbouguet         ###   ########.fr       */
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
	if (_type == "Dog")
		std::cout << "Wouafffff !" << std::endl;
	else
		std::cout << "* Unknown type *" << std::endl;
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
	_brain = new Brain(*src._brain);
	
	std::cout << ITALIC << "Copy constructor called for Dog" << END_C << std::endl;
	_type = src._type;
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

	std::cout << "Assignment operator called for Dog" << std::endl;
	if (this != &instance)
	{	
		delete _brain;
		_brain = new Brain(*instance._brain);
		_type = instance._type;
	}
	return *this;
}


