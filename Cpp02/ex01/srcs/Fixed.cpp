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

#include "../incs/Fixed.hpp"

//	---------------------	Static    ---------------------

const int Fixed::_staticFractionalBits = 8;

//	---------------------	Fonctions membres    ---------------------

int		Fixed::toInt(void) const
{
	return (roundf(this->_fixedPointValue >> _staticFractionalBits));
}

float	Fixed::toFloat(void) const
{
	/*	---------------------	Notes	---------------------
		Le static_cast est plus spécifique et plus sûr que le cast C-style.
		Il est utilisé pour les conversions de types qui ne nécessitent pas 
		de changement de représentation binaire du type.
	*/
	return (static_cast<float>(_fixedPointValue) / ( 1 << _staticFractionalBits));
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

Fixed::Fixed(const float a)
{

	/*	---------------------	Explications		 ---------------------
		<< _staticFractionalBits revient a multiplier par 2^_staticFractionalBits 
		le float en parametre (=256). les bits sont alors decales de 8 positions 
		vers la gauche. Ainsi, les 8 permiers bits de l'entier represente la partie 
		fractionnaire du nombre a virgule fixe.
		La partie entiere est definie sur les 3 autres bytes restant de l'int 
		(- 1 bit car signe)
	*/
	std::cout << "Float constructor called" << std::endl;
	if (roundf(a * (1 << this->_staticFractionalBits)) > INT_MAX)
		std::cout << "Int overflow" << std::endl << "Please use smaller values for a valid reprensation" << std::endl;
	else
		this->_fixedPointValue = roundf((a * (1 << this->_staticFractionalBits)));
	return ;
}

Fixed::Fixed(const int a)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixedPointValue = a << _staticFractionalBits;
	return ;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called for Fixed" << std::endl;
	this->_fixedPointValue = src._fixedPointValue;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called for Fixed" << std::endl;
	return ;
}
//	---------------------	Operators    ---------------------

Fixed&	Fixed::operator=(Fixed const &instance)
{
	std::cout << "Copy assignment operator called for Fixed" << std::endl;
	if (this != &instance)
		this->_fixedPointValue = instance._fixedPointValue;
	return *this;
}




