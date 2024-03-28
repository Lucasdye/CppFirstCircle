/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2005/03/20 12:07:48 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/27 14:33:40 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/base.hpp"

//-------------------- Member funcs -----------------------------------------//
void AMateria::use(ICharacter &target)
{
	std::cout << "* heals" << " " << target.getName() << "’s wounds *" << std::endl;
	return ;
}

//-------------------- Set/Get ----------------------------------------------//
std::string const &AMateria::getType() const
{
	return (_type);
}

void AMateria::setType(std::string type)
{
	
	_type = type;
	return ;
}

//-------------------- Constructor/Destructor -------------------------------//
AMateria::AMateria()
{
	std::cout << "Default constructor called for AMateria" << std::endl;
	_type = "";
	return ;
}

AMateria::AMateria(std::string const &type) : _type( type )
{
	std::cout << "Parametric constructor called for AMateria" << std::endl;
	return ;
}

AMateria::AMateria(AMateria const &src)
{
	std::cout << "Copy constructor called for AMateria" << std::endl;
	_type = src._type;
	return ;
}

AMateria::~AMateria()
{
	std::cout << "Destructor called for AMateria" << std::endl;
	return ;
}

//-------------------- Operators --------------------------------------------//
AMateria&	AMateria::operator=(AMateria const &instance)
{
	std::cout << "Assignment operator called for AMateria" << std::endl;
	if (this != &instance)
	{
		_type = instance._type;
	}
	return *this;
}
