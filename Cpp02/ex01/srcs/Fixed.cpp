/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2027/02/20 10:15:58 by lbouguet          #+#    #+#             */
/*   Updated: 2024/02/29 11:22:23 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/base.hpp"

//	---------------------	Static    -----------------------------------------

const int Fixed::_staticFractionalBits = 8;

//	---------------------	Methods   -----------------------------------------

bool	Fixed::checkFixedPointOverflow(int a) const
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

int		Fixed::toInt(void) const
{
	return (roundf(_fixedPointValue >> _staticFractionalBits));
}

float	Fixed::toFloat(void) const
{
	/*	---------------------	Notes	---------------------
		Le static_cast est plus spécifique et plus sûr que le cast C-style.
		Il est utilisé pour les conversions de types qui nécessitent 
		une nouvelle représentation binaire du type.
	*/
	return (<float>(_fixedPointValue) / ( 1 << _staticFractionalBits));
}

//	---------------------	Get/Set    ---------------------

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixedPointValue);
}

void Fixed::setRawBits( int const raw )
{
	_fixedPointValue = raw << _staticFractionalBits;
	return ;
}

//	---------------------	Contructors/Destructor    ---------------------
Fixed::Fixed() : _fixedPointValue(0)
{
	std::cout << "Default constructor called for Fixed" << std::endl;
	return ;
}

Fixed::Fixed(const float a): _fixedPointValue(0)
{
	std::cout << "Float constructor called" << std::endl;
	if (roundf(a * (1 << _staticFractionalBits)) > INT_MAX)
	{
		std::cout << YELLOW << "Int overflow" << std::endl 
		<< "Please use smaller values for a valid reprensation" << END_C << std::endl;
	}
	else
		_fixedPointValue = roundf((a * (1 << _staticFractionalBits)));
	//checkSign(a);
	return ;
}

Fixed::Fixed(const int a): _fixedPointValue(0)
{
	std::cout << "Int constructor called" << std::endl;
	if (checkFixedPointOverflow(a))
		return ;
	else
		_fixedPointValue = a << _staticFractionalBits;
	return ;
}

Fixed::Fixed(Fixed const &src): _fixedPointValue(0)
{
	std::cout << "Copy constructor called for Fixed" << std::endl;
	_fixedPointValue = src._fixedPointValue;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called for Fixed" << std::endl;
	return ;
}
//	---------------------	Operators    ---------------------

Fixed	&Fixed::operator=(Fixed const &instance)
{
	std::cout << "Copy assignment operator called for Fixed" << std::endl;
	if (this != &instance)
		_fixedPointValue = instance._fixedPointValue;
	return *this;
}

std::ostream &operator<<(std::ostream &out, Fixed const &inst)
{
	out << inst.toFloat();
    return (out);
}
