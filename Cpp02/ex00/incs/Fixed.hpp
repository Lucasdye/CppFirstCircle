/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2027/02/20 10:15:58 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/14 16:53:16 by lbouguet         ###   ########.fr       */
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
	//-------------------- Set/get ------------------------------------------//
    	int		getRawBits(void) const;
		void	setRawBits(int const raw);
	//-------------------- Cons/Des -----------------------------------------//
    			Fixed();
    			Fixed(Fixed const &src);
				~Fixed();
	//-------------------- Operators ----------------------------------------//
    	Fixed&	operator=(Fixed const &instance);
};

#endif

