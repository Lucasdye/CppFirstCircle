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

//	---------------------	Statics var		---------------------------------//

const int Fixed::_staticFractionalBits = 8;

//	---------------------	Statics funcs surchargees	---------------------//

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

//-------------------- Funcs membres ----------------------------------------//

int		Fixed::toInt(void) const
{
	return (roundf(this->_fixedPointValue >> _staticFractionalBits));
}

float	Fixed::toFloat(void) const
{
//-------------------- Notes -----------------------------------------------//
	/*	Le static_cast est plus spécifique et plus sûr que le cast C-style.
		Il est utilisé pour les conversions de types qui ne nécessitent pas 
		de changement de représentation binaire du type.
	*/
	return (static_cast<float>(_fixedPointValue) / (1 << _staticFractionalBits));
}

//	--------------------- Get/Set -------------------------------------------//

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

//------------------------ Contructors/Destructor ------------------------------//
Fixed::Fixed() : _fixedPointValue(0)
{
	std::cout << "Default constructor called for Fixed" << std::endl;
	return ;
}

Fixed::Fixed(const float a)
{

	/*	--------------------- Explications ------------------------------------//
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

// de comparaison
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
	if (this->_fixedPointValue <= instance._fixedPointValue)
		return (true);
	else 
		return (false);
}

// arithmetiques
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

// Pré-incrémentation
Fixed& Fixed::operator++() 
{
    // Augmente la valeur de l'unité ε
    this->_fixedPointValue += 1;
    return *this;
}

// Post-incrémentation
Fixed Fixed::operator++(int) 
{
    Fixed temp = *this;	// Copie de l'objet actuel
    ++(*this);			// Utilise la pré-incrémentation
    return temp;		// Retourne la copie non modifiée
}

// Pré-décrémentation
Fixed& Fixed::operator--() 
{
    // Diminue la valeur de l'unité ε
    this->_fixedPointValue -= 1;
    return *this;
}

// Post-décrémentation
Fixed Fixed::operator--(int) 
{
    Fixed temp = *this; // Copie de l'objet actuel
    --(*this); // Utilise la pré-décrémentation
    return temp; // Retourne la copie non modifiée
}


