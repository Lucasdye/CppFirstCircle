/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2005/03/20 12:08:09 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/25 17:57:06 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/base.hpp"

//-------------------- Member funcs -----------------------------------------//
Cure* Cure::clone() const
{
	Cure *cpy;

	cpy = new Cure("ice");
	return (cpy);
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals" << " " << target.getName() << "’s wounds *" << std::endl;
	return ;
}

//-------------------- Set/Get ----------------------------------------------//
//-------------------- Constructor/Destructor -------------------------------//
Cure::Cure(std::string type): AMateria(type)
{
	std::cout << "Default constructor called for Cure" << std::endl;
	_type = type;
	return ;
}

Cure::Cure()
{
	std::cout << "Default constructor called for Cure" << std::endl;
	return ;
}

Cure::Cure(Cure const & src)
{
	std::cout << "Copy constructor called for Cure" << std::endl;
	return ;
}

Cure::~Cure()
{
	std::cout << "Destructor called for Cure" << std::endl;
	return ;
}

//-------------------- Operators --------------------------------------------//
Cure&	Cure::operator=(Cure const & instance)
{
	std::cout << "Assignment operator called for Cure" << std::endl;
	if (this != &instance)
	{
	}
	return *this;
}


