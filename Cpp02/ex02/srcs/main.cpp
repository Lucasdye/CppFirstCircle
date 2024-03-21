/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2027/02/20 10:15:58 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/20 19:06:34 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../incs/base.hpp"

int main( void ) 
{
	Fixed a;
	//Fixed testa(5);
	//Fixed testb(2);
	//int	  sumRawBits;
	//int   mulRawBits;	

	//mulRawBits = testa.getRawBits() * testb.getRawBits();
	//sumRawBits = testa.getRawBits() + testb.getRawBits();
	//std::cout << "sumRawBits : " << sumRawBits / 256 << std::endl;
	//std::cout << "mulRawBits : " << mulRawBits / 65536 << std::endl;
	//-------------------- Deroulement --------------------------------------//
	/*
		Deux appels aux constructeurs pour les arguments (float et int).
		Un appel à l'opérateur * qui renvoie une nouvelle instance de Fixed.
		Un appel au constructeur par copie (ou de déplacement) pour initialiser
		b avec le résultat de l'opérateur *. 
	*/
	Fixed const b(Fixed(5.05f) * Fixed(2));
	//Fixed const c(Fixed(2) * Fixed(5.05f));
	Fixed const c(Fixed(5) / Fixed(2));
	Fixed const d(Fixed(5) * Fixed(0.5f));
	Fixed const e(Fixed(5) + Fixed(0.5f));
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << "Error" << std::endl;
	std::cout << b << std::endl; 
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;
	std::cout << e << std::endl;

	return 0;
}