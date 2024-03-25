/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2004/03/20 10:14:18 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/25 14:00:04 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/base.hpp"


//-------------------- Member funcs -------------------------------------------//
std::string	Cat::getThought(size_t idx)
{
	return (_brain->getIdea(idx));
}

//-------------------- Constructor/Destructor ---------------------------------//
Cat::Cat(): Animal()
{
	std::cout << ITALIC << "Default constructor called for Cat" << END_C << std::endl;
	_type = "Cat";
	_brain = new Brain();
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
	delete _brain;
	return ;
}

//-------------------- Operators ----------------------------------------------//
Cat&		Cat::operator=(Cat const& instance)
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

