/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2027/02/20 10:15:58 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/21 16:42:23 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../incs/base.hpp"

int main( void ) 
{
	Fixed a;
	Fixed b(Fixed(5.05f) * (Fixed(2)));
	Fixed maxWholeNb (Fixed(80000));
	//float f = 80000.00390625;

	
	std::cout << "\tA" << std::endl;
	std::cout << std::fixed  << std::setprecision(8) << a << std::endl;
	std::cout << std::fixed  << std::setprecision(8) << ++a << std::endl;
	std::cout << std::fixed  << std::setprecision(8) << a<< std::endl;
	std::cout << std::fixed  << std::setprecision(8) << a++ << std::endl;
	std::cout << std::fixed  << std::setprecision(8) << a<< std::endl;
	
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	
	std::cout << "\tB" << std::endl;
	std::cout << std::fixed  << std::setprecision(8) << b<< std::endl;
	std::cout << std::fixed  << std::setprecision(8) << ++b << std::endl;
	std::cout << std::fixed  << std::setprecision(8) << b<< std::endl;
	std::cout << std::fixed  << std::setprecision(8) << b++ << std::endl;
	std::cout << std::fixed  << std::setprecision(8) << b<< std::endl;
	std::cout << std::fixed  << std::setprecision(8) << ++b << std::endl;

	std::cout << "\tBig Whole numbers, precision is lost at 10^5" << std::endl;
	std::cout << std::fixed  << std::setprecision(8) << maxWholeNb << std::endl;
	std::cout << "rawBits = " << maxWholeNb.getRawBits() << std::endl;
	
	std::cout << std::fixed  << std::setprecision(8) << ++maxWholeNb << std::endl;
	std::cout << "rawBits = " << maxWholeNb.getRawBits() << std::endl;

	std::cout << std::fixed  << std::setprecision(8) << maxWholeNb << std::endl;
	std::cout << "rawBits = " << maxWholeNb.getRawBits() << std::endl;

	std::cout << std::fixed  << std::setprecision(8) << maxWholeNb++ << std::endl;
	std::cout << "rawBits = " << maxWholeNb.getRawBits() << std::endl;

	std::cout << std::fixed  << std::setprecision(8) << maxWholeNb << std::endl;
	std::cout << "rawBits = " << maxWholeNb.getRawBits() << std::endl;

	std::cout << std::fixed  << std::setprecision(8) << ++maxWholeNb << std::endl;
	std::cout << "rawBits = " << maxWholeNb.getRawBits() << std::endl;

	std::cout << std::fixed  << std::setprecision(8) << ++maxWholeNb << std::endl;
	std::cout << "rawBits = " << maxWholeNb.getRawBits() << std::endl;

	std::cout << std::fixed  << std::setprecision(8) << ++maxWholeNb << std::endl;
	std::cout << "rawBits = " << maxWholeNb.getRawBits() << std::endl;
	
	//std::cout << "float = " << std::fixed  << std::setprecision(8) << f  << std::endl;
	return 0;
}