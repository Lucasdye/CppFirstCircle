/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2027/02/20 10:15:58 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/26 15:26:51 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/base.hpp"

//	---------------------	Static    -----------------------------------------

const int	Fixed::_staticFractionalBits = 8;

//	---------------------	Methods   -----------------------------------------

bool	Fixed::checkIntFixedPointOverflow(const int a) const
{
	int maxCapStorInt = 8388607;

	if (a > maxCapStorInt)
	{	
		std::cout << YELLOW << "You're using all bits for the integer part, at least 8 bits should be reserverd to the decimal part"
		<< " please don't go over the value 8388607" << END_C <<std::endl;
		std::cout << YELLOW << "_fixedPointValue as been set to maximum int value it can store (8388607)" << END_C << std::endl;
		return (true);
	}
	else 
		return (false);
}

bool	Fixed::checkIntFixedPointUnderflow(const int a)	const
{
	int minCapStorInt = -8388607;
	
	if (a < minCapStorInt)
	{
		std::cout << YELLOW << "You're using all bits for the integer part, at least 8 bits should be reserverd to the decimal part"
		<< " please don't go below the value -8388607" << END_C <<std::endl;
		std::cout << YELLOW << "_fixedPointValue as been set to maximum negative int value it can store (-8388607)" << END_C << std::endl; 
		return (true);
	}
	else 
		return (false);
}

bool	Fixed::checkFloatFixedPointOverflow(const int a) const
{
	float	maxCapStorFloat = 8388608;// max float value than can be stored in a 32-bit integer

	if (a > maxCapStorFloat)
	{	
		std::cout << YELLOW << "Float is to big to be stored in the fixed point integer: int overflow" << std::endl 
	 	<< "_fixedPointValue as been set to maximum float value it can store (8388608)" << END_C << std::endl;
		return (true);
	}
	else
		return (false);
}

bool	Fixed::checkFloatFixedPointUnderflow(const int a) const
{
	float	minCapStorFloat = -8388608;//min float value than can be stored in a 32-bit integer

	if (a < minCapStorFloat)
	{	
		std::cout << YELLOW << "Float has a to big negative value to be stored in the fixed point integer: int underflow" << std::endl 
	 	<< "_fixedPointValue as been set to maximum negative float value it can store (-8388608)" << END_C << std::endl;
		return (true);
	}
	else
		return (false);
	
}

int		Fixed::toInt(void) const
{
	return (static_cast<int>(roundf(_fixedPointValue >> _staticFractionalBits)));
}

float	Fixed::toFloat(void) const
{
	/*	---------------------	Notes	---------------------
		Le static_cast est plus spécifique et plus sûr que le cast C-style.
		Il est utilisé pour les conversions de types qui nécessitent 
		une nouvelle représentation binaire du type.
	*/
	return (static_cast<float>(_fixedPointValue)  / ( 1 << _staticFractionalBits));
}


//	---------------------	Get/Set    ---------------------
int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixedPointValue);
}

void 	Fixed::setRawBits(int const raw)
{
	_fixedPointValue = raw;
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

	if (checkFloatFixedPointOverflow(a))
		_fixedPointValue = INT_MAX;
	else if (checkFloatFixedPointUnderflow(a))
		_fixedPointValue = INT_MIN;
	else
		_fixedPointValue = static_cast<int>((roundf((a * (1 << _staticFractionalBits)))));
	return ;
}

Fixed::Fixed(const int a): _fixedPointValue(0)
{
	std::cout << "Int constructor called" << std::endl;
	// if (checkIntFixedPointOverflow(a))
	// {
	// 	std::cout << "The max value the fixed point integer can store has been set => 4194303" << std::endl;
	// 	_fixedPointValue =  8388607 << _staticFractionalBits;
	// 	return ;
	// }
	// else if (checkIntFixedPointUnderflow(a))
	// {
	// 	std::cout << "The max minimum value the fixed point integer can store has been set => -4194303" << std::endl;
	// 	_fixedPointValue = (-1) * (8388607 << _staticFractionalBits);
	// 	return ;
	// }
	// else
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

Fixed			&Fixed::operator=(Fixed const &instance)
{
	std::cout << "Copy assignment operator called for Fixed" << std::endl;
	if (this != &instance)
		_fixedPointValue = instance._fixedPointValue;
	return *this;
}

std::ostream	&operator<<(std::ostream &out, Fixed const &inst)
{
	out << inst.toFloat();
    return (out);
}
