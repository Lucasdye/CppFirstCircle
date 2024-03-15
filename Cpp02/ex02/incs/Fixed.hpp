/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2027/02/20 10:15:58 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/14 16:56:04 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <sstream>
# include <unistd.h>
# include <string>
# include <cstdlib>
# include <iomanip>
# include <fstream>
# include <cmath>
# include <string.h>
# include <limits.h>
# include <cmath>

class Fixed
{
	private:
		int					_fixedPointValue;
		static const int	_staticFractionalBits;
		
	public:
    	int		getRawBits(void) const; // Le suffix const du proto indique que la méthode ne modifiera pas l'état de l'objet sur lequel elle est appelée.
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
    			Fixed(const float a);// Contructor avec arg float qui convertit en eniter a virgule fixe
				Fixed(const int a);
    			Fixed();// Contructor par defaut
    			Fixed(Fixed const & src);// Constructeur par copie
				// Les operateurs de surcharge
					// Egalite
    			Fixed& operator=(Fixed const & instance);// Operateur d'affectation '='
				 	// Comparaisons
    			bool operator<(Fixed const & instance);// Operateur d'affectation '='
    			bool operator>(Fixed const & instance);// Operateur d'affectation '='
    			bool operator>=(Fixed const & instance);// Operateur d'affectation '='
    			bool operator<=(Fixed const & instance);// Operateur d'affectation '='
    			bool operator==(Fixed const & instance);// Operateur d'affectation '='
    			bool operator!=(Fixed const & instance);// Operateur d'affectation '='
					// Arithmetiques
    			Fixed	operator+(Fixed const & instance);// Operateur d'affectation '='
    			Fixed	operator-(Fixed const & instance);// Operateur d'affectation '='
    			Fixed	operator*(Fixed const & instance);// Operateur d'affectation '='
    			Fixed	operator/(Fixed const & instance);// Operateur d'affectation '='
					// d'Incrementation
						// Pre-incrementation
				Fixed& operator++();
				Fixed& operator--();
						// Post-incrementation 
				Fixed operator++(int);
				Fixed operator--(int);
				// Deconstructor
				~Fixed();
				// fonctions membres publiques surchargées
				Fixed static min(Fixed &a,Fixed &b);
				Fixed static min(const Fixed &a,const Fixed &b);
				Fixed static max(Fixed &a,Fixed &b);
				Fixed static max(const Fixed &a,const Fixed &b);
				
};

#endif

