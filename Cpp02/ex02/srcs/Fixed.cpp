/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2027/02/20 10:15:58 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/20 19:05:46 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Fixed.hpp"

//	-------------------- Statics var -------------------------------------//
const int Fixed::_staticFractionalBits = 8;

//	-------------------- Statics funcs surchargees	---------------------//
Fixed Fixed::min(Fixed &a,Fixed &b)
{
	return ((a._fixedPointValue < b._fixedPointValue) ? a : b);
}

Fixed Fixed::min(const Fixed &a,const Fixed &b)
{
	return ((a._fixedPointValue < b._fixedPointValue) ? a : b);
}

Fixed Fixed::max(Fixed &a,Fixed &b)
{
	return ((a._fixedPointValue > b._fixedPointValue) ? a : b);
}

Fixed Fixed::max(const Fixed &a,const Fixed &b)
{
	return ((a._fixedPointValue > b._fixedPointValue) ? a : b);
}
//	-------------------- Methods   -------------------------------------------//

// ----- Checkers
bool	Fixed::checkIntFixedPointOverflow(const int a) const
{
	int maxCapStorInt = 4194303;

	if (a > maxCapStorInt)
	{	
		std::cout << YELLOW << "You're using all bits for the integer part, at least 8 bits should be reserverd to the decimal part"
		<< " please don't go over the value 16.777.215" << END_C <<std::endl;
		std::cout << YELLOW << "_fixedPointValue as been set to maximum int value it can store (4194303)" << END_C << std::endl;
		return (true);
	}
	else 
		return (false);
}

bool	Fixed::checkIntFixedPointUnderflow(const int a)	const
{
	int minCapStorInt = -4194303;
	
	if (a < minCapStorInt)
	{
		std::cout << YELLOW << "You're using all bits for the integer part, at least 8 bits should be reserverd to the decimal part"
		<< " please don't go below the value -16.777.215" << END_C <<std::endl;
		std::cout << YELLOW << "_fixedPointValue as been set to maximum negative int value it can store (-4194303)" << END_C << std::endl; 
		return (true);
	}
	else 
		return (false);
}

bool	Fixed::checkFloatFixedPointOverflow(const int a) const
{
	float	maxCapStorFloat = 8388607;// max float value than can be stored in a 32-bit integer

	if (a > maxCapStorFloat)
	{	
		std::cout << YELLOW << "Float is to big to be stored in the fixed point integer: int overflow" << std::endl 
	 	<< "_fixedPointValue as been set to maximum float value it can store (268435455.875f)" << END_C << std::endl;
		return (true);
	}
	else
		return (false);
}

bool	Fixed::checkFloatFixedPointUnderflow(const int a) const
{
	float	minCapStorFloat = -8388607;//min float value than can be stored in a 32-bit integer

	if (a < minCapStorFloat)
	{	
		std::cout << YELLOW << "Float has a to big negative value to be stored in the fixed point integer: int overflow" << std::endl 
	 	<< "_fixedPointValue as been set to maximum negative float value it can store (-268435455.875f)" << END_C << std::endl;
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

//	---------------------	Get/Set    --------------------------------------//

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixedPointValue);
}

void 	Fixed::setRawBits(int const raw)
{
	if (checkIntFixedPointOverflow(raw))
		_fixedPointValue = 4194303;
	else if (checkIntFixedPointUnderflow(raw))
		_fixedPointValue = -4194303;
	else 
		_fixedPointValue = raw << _staticFractionalBits;
	return ;
}

//	---------------------	Contructors/Destructor	-------------------------//

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
	if (checkIntFixedPointOverflow(a))
	{
		std::cout << "The max value the fixed point integer can store has been set => 4194303" << std::endl;
		_fixedPointValue = 4194303 << _staticFractionalBits;
		return ;
	}
	else if (checkIntFixedPointUnderflow(a))
	{
		std::cout << "The max minimum value the fixed point integer can store has been set => -4194303" << std::endl;
		_fixedPointValue = 4194303 << _staticFractionalBits;
		return ;
	}
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

//	---------------------	Operators    ------------------------------------//
//----- Equality
Fixed&	Fixed::operator=(Fixed const &instance)
{
	std::cout << "Copy assignment operator called for Fixed" << std::endl;
	if (this != &instance)
		this->_fixedPointValue = instance._fixedPointValue;
	return *this;
}

//----- Comparison
bool Fixed::operator<(Fixed const & instance)
{
	if (this->_fixedPointValue < instance._fixedPointValue)
		return (true);
	else 
		return (false);
}

bool Fixed::operator>(Fixed const & instance)
{
	if (this->_fixedPointValue > instance._fixedPointValue)
		return (true);
	else 
		return (false);
}

bool Fixed::operator==(Fixed const & instance)
{
	if (this->_fixedPointValue == instance._fixedPointValue)
		return (true);
	else 
		return (false);
}

bool Fixed::operator>=(Fixed const & instance)
{
	if (this->_fixedPointValue >= instance._fixedPointValue)
		return (true);
	else 
		return (false);
}

bool Fixed::operator<=(Fixed const &instance)
{
	if (this->_fixedPointValue <= instance._fixedPointValue)
		return (true);
	else 
		return (false);
}

bool Fixed::operator!=(Fixed const &instance)
{
	if (this->_fixedPointValue != instance._fixedPointValue)
		return (true);
	else 
		return (false);
}

//----- Arithmetics
Fixed Fixed::operator+(Fixed const &instance)
{
	// Fixed point atithemtic stored in a float. 
	float result = this->_fixedPointValue + instance._fixedPointValue;
    // Float arithmetic. Rescaling back result to / 2^8.
	return (Fixed(result / 256));
}

Fixed Fixed::operator-(Fixed const &instance)
{
	float result = this->_fixedPointValue - instance._fixedPointValue;
	return (Fixed(result / 256));
}

Fixed Fixed::operator*(Fixed const &instance)
{
	// Fixed point atithemtic stored in a float. 
    float result = this->_fixedPointValue * instance._fixedPointValue; // Safer against overflow
    // Float arithmetic. Rescaling back result to / 2^2 * 8.
	return Fixed(result / 65536);
}

Fixed Fixed::operator/(Fixed const &instance)
{
	// Float arithmetic seems necessary for division. (could it be avoid ?)
    float result = toFloat() / instance.toFloat();
    return Fixed(result);
}

//----- Pre-incremenation
Fixed& Fixed::operator++() 
{
	long long llcheck = _fixedPointValue + 1;

	if (llcheck > INT_MAX)
	{
		std::cout << YELLOW << "Pre-incrementation is causing int overflow" 
		<< END_C << std::endl;
		std::cout << BLUE << "Setting Fixed point to INT_MAX" << END_C << std::endl;
		_fixedPointValue = INT_MAX;
	}
	else
    	_fixedPointValue += 1;
    return *this;
}

//----- Post-incremenation
Fixed Fixed::operator++(int) 
{
	long long llcheck = _fixedPointValue + 1;
	
	Fixed temp = *this;	// Copy object before change
	if (llcheck > INT_MAX)
	{
		std::cout << YELLOW << "Pre-incrementation is causing int overflow" 
		<< END_C << std::endl;
		std::cout << BLUE << "Setting Fixed point to INT_MAX" << END_C << std::endl;
		_fixedPointValue = INT_MAX;
	}
	else
    	_fixedPointValue += 1;	
	return temp;				
}

//----- Pre-decrementation
Fixed& Fixed::operator--() 
{
    // Diminue la valeur de l'unité ε
	long long llcheck = _fixedPointValue - 1;

	if (llcheck < INT_MIN)
	{
		std::cout << YELLOW << "Pre-incrementation is causing int overflow" 
		<< END_C << std::endl;
		std::cout << BLUE << "Setting Fixed point to INT_MAX" << END_C << std::endl;
		_fixedPointValue = INT_MIN;
	}
	else
    	this->_fixedPointValue -= 1;
    return *this;
}

//----- Post-decrementation
Fixed Fixed::operator--(int) 
{
	long long llcheck = _fixedPointValue - 1;
	
	Fixed temp = *this;	// Copy object before change
	if (llcheck < INT_MIN)
	{
		std::cout << YELLOW << "Pre-incrementation is causing int overflow" 
		<< END_C << std::endl;
		std::cout << BLUE << "Setting Fixed point to INT_MIN" << END_C << std::endl;
		_fixedPointValue = INT_MIN;
	}
	else
    	_fixedPointValue -= 1;	
	return temp;
}


