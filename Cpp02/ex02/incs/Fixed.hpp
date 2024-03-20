/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2027/02/20 10:15:58 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/20 18:44:51 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include "base.hpp"

class Fixed
{
	private:
		int					_fixedPointValue;
		static const int	_staticFractionalBits;
		
	public:
	//-------------------- Methods ------------------------------------------//
		float	toFloat(void)	const;
		int		toInt(void)		const;
		bool	checkIntFixedPointOverflow(const int a)		const;
		bool	checkIntFixedPointUnderflow(const int a)	const;
		bool	checkFloatFixedPointOverflow(const int a)	const;
		bool	checkFloatFixedPointUnderflow(const int a)	const;
		//----- Statics
		Fixed static min(Fixed &a,Fixed &b);
		Fixed static min(const Fixed &a,const Fixed &b);
		Fixed static max(Fixed &a,Fixed &b);
		Fixed static max(const Fixed &a,const Fixed &b);
	//-------------------- Set/get ------------------------------------------//
		int		getRawBits(void)	const;
		void	setRawBits(int const raw);
	//-------------------- Cons/Des -----------------------------------------//
				Fixed(const float a);
				Fixed(const int a);
				Fixed();
				Fixed(Fixed const & src);
				~Fixed();
	//-------------------- Operators ----------------------------------------//
    	Fixed&	operator=(Fixed const & instance);
		//----- Comparison
    	bool	operator<(Fixed const & instance); 
    	bool 	operator>(Fixed const & instance); 
    	bool 	operator>=(Fixed const & instance);
    	bool 	operator<=(Fixed const & instance);
    	bool 	operator==(Fixed const & instance);
    	bool 	operator!=(Fixed const & instance);
		//----- Arithmetic
    	Fixed	operator+(Fixed const & instance);
    	Fixed	operator-(Fixed const & instance);
    	Fixed	operator*(Fixed const & instance);
    	Fixed	operator/(Fixed const & instance);
		//----- Incrementation/Decrementation
			//----- Pre-incrementation/decremenation
		Fixed&	operator++();
		Fixed&	operator--();
			//----- Post-incrementation/decremenation
		Fixed	operator++(int);
		Fixed	operator--(int);
};

std::ostream & operator<<( std::ostream & out, Fixed const & inst );

#endif

