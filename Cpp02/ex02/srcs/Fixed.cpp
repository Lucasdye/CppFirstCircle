/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2027/02/20 10:15:58 by lbouguet          #+#    #+#             */
/*   Updated: 2024/02/29 12:40:22 by lbouguet         ###   ########.fr       */
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

bool	Fixed::checkFixedPointOverflow(int a)	const
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

int		Fixed::toInt(void)						const
{
	return (roundf(_fixedPointValue >> _staticFractionalBits));
}

float	Fixed::toFloat(void) 					const
{
	/*-----	Notes
		Le static_cast est plus spécifique et plus sûr que le cast C-style.
		Il est utilisé pour les conversions de types qui nécessitent 
		une nouvelle représentation binaire du type.
	*/
	return (static_cast<float>(_fixedPointValue) / (1 << _staticFractionalBits));
}
//	---------------------	Get/Set    --------------------------------------//

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

//	---------------------	Contructors/Destructor	-------------------------//
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
	return (this->_fixedPointValue + instance._fixedPointValue);
}

Fixed Fixed::operator-(Fixed const &instance)
{
	return (this->_fixedPointValue - instance._fixedPointValue);
}

Fixed Fixed::operator*(Fixed const &instance)
{
	return (this->toFloat() * instance.toFloat());
}

Fixed Fixed::operator/(Fixed const &instance)
{
	return (this->_fixedPointValue / instance._fixedPointValue);
}

//----- Pre-incremenation
Fixed& Fixed::operator++() 
{
    // Augmente la valeur de l'unité ε
    this->_fixedPointValue += 1;
    return *this;
}

//----- Post-incremenation
Fixed Fixed::operator++(int) 
{
    Fixed temp = *this;	// Copie de l'objet actuel
    ++(*this);			// Utilise la pré-incrémentation définie au-dessus
    return temp;		// Retourne la copie non modifiée
}

//----- Pre-decrementation
Fixed& Fixed::operator--() 
{
    // Diminue la valeur de l'unité ε
    this->_fixedPointValue -= 1;
    return *this;
}

//----- Post-decrementation
Fixed Fixed::operator--(int) 
{
    Fixed temp = *this;	// Copie de l'objet actuel
    --(*this);			// Utilise la pré-décrémentation définie au-dessus
    return temp;		// Retourne la copie non modifiée
}


