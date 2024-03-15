/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2005/03/20 12:07:48 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/07 11:42:51 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/AMateria.hpp"

//-------------------- Member funcs -----------------------------------------//
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
	return ;
}

AMateria::AMateria(AMateria const &src)
{
	std::cout << "Copy constructor called for AMateria" << std::endl;
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
		
	}
	return *this;
}


