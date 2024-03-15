/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2027/02/20 10:15:58 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/14 16:58:59 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Fixed.hpp"



const int Fixed::_staticFractionalBits = 8;

//-------------------- Methods ----------------------------------------------//
//-------------------- Set/Get ----------------------------------------------//
int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixedPointValue);
}

void Fixed::setRawBits(int const raw)
{
	_fixedPointValue = raw << _staticFractionalBits;
	return ;
}

//-------------------- Constructor/Destructor -------------------------------//
Fixed::Fixed() : _fixedPointValue(0)
{
	std::cout << "Default constructor called for Fixed" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const &src)
{
	this->_fixedPointValue = src._fixedPointValue;
	std::cout << "Copy constructor called for Fixed" << std::endl;
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called for Fixed " << std::endl;
	return ;
}

//-------------------- Operators --------------------------------------------//
Fixed	&Fixed::operator=(Fixed const &instance)
{
	std::cout << "Assignment operator called for Fixed" << std::endl;
	if (this != &instance)
		_fixedPointValue = instance._fixedPointValue;
	return *this;
}
