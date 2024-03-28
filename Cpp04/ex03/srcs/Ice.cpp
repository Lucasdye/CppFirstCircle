/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2005/03/20 12:08:04 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/27 14:34:42 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/base.hpp"

class AMateria;


//-------------------- Member funcs -----------------------------------------//
Ice*	Ice::clone() const//OK
{
	Ice *cpy;

	cpy = new Ice(*this);
	return (cpy);
}

void	Ice::use(ICharacter &target)//OK
{
	std::cout << "* shoots an ice bolt at" << " " << target.getName() << " *"<<std::endl;
	return ;
}

//-------------------- Set/Get ----------------------------------------------//
//-------------------- Constructor/Destructor -------------------------------//

// Ice::Ice(std::string type) : AMateria(type)
// {
// 	std::cout << "Default constructor called for Ice" << std::endl;
// 	_type = type;
// 	return ;
// }

Ice::Ice() : AMateria()
{
	std::cout << "Default constructor called for Ice" << std::endl;
	_type = "ice";
	return ;
}


Ice::Ice(Ice const &src) : AMateria()//OK
{
	std::cout << "Copy constructor called for Ice" << std::endl;
	// _type = src._type;
	*this = src;
	return ;
}

Ice::~Ice()//OK
{
	std::cout << "Destructor called for Ice" << std::endl;
	return ;
}

//-------------------- Operators --------------------------------------------//
Ice&	Ice::operator=(Ice const& instance)
{
	std::cout << "Assignment operator called for Ice" << std::endl;
	if (this != &instance)
	{
		_type = instance._type;	
	}
	return *this;
}



