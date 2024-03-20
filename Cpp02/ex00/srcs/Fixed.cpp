/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2027/02/20 10:15:58 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/20 11:29:21 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Fixed.hpp"

const int Fixed::_staticFractionalBits = 8;

//-------------------- Methods ----------------------------------------------//
bool	Fixed::checkFixedPointOverflow(const int a)	const
{
	if (a > 16777215)
	{	
		std::cout << YELLOW << "You're using all bits for the integer part, at least 8 bits should be reserverd to the decimal part"
		<< " please don't exceed the value 16.777.215" << END_C <<std::endl;
		return (true);
	}
	else 
		return (false);
}

bool	Fixed::checkFixedPointUnderflow(const int a)	const
{
	if (a < -16777215)
	{
		std::cout << YELLOW << "You're using all bits for the integer part, at least 8 bits should be reserverd to the decimal part"
		<< " please don't go below the value -16.777.215" << END_C <<std::endl;
		return (true);
	}
	else 
		return (false);
}

//-------------------- Set/Get ----------------------------------------------//
int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixedPointValue);
}

void Fixed::setRawBits(int const raw)
{
	if (checkFixedPointOverflow(raw))
	{	
		std::cout << "The value 16.777.215 has been set" << std::endl;
		_fixedPointValue = 16777215;
	}
	else if (checkFixedPointUnderflow(raw))
	{
		std::cout << "The value 16.777.215 has been set" << std::endl;
		_fixedPointValue = -16777215;
	}
	else 
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
	_fixedPointValue = src._fixedPointValue;
	std::cout << "Copy constructor called for Fixed" << std::endl;
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called for Fixed" << std::endl;
	return ;
}

//-------------------- Operators --------------------------------------------//
Fixed	&Fixed::operator=(Fixed const &instance)
{
	std::cout << "Copy assignment operator called for Fixed" << std::endl;
	if (this != &instance)
		_fixedPointValue = instance._fixedPointValue;
	return (*this);
}
