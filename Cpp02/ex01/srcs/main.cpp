/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2027/02/20 10:15:58 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/26 15:41:11 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../incs/base.hpp"

int main( void ) 
{
	// Fixed a;
	// Fixed const b(10);
	// Fixed const c(42.42f);
	// Fixed const d(b);
	Fixed const e(-838860);
	// a = Fixed(1234.4321f);


	std::cout << "e is " <<  std::fixed  << std::setprecision(8) << e << std::endl;
	std::cout << "e is " <<  std::fixed  << std::setprecision(8) << e.toFloat() << std::endl;
	// std::cout << "b is " << b << std::endl;
	// std::cout << "c is " << c << std::endl;
	// std::cout << "d is " << d << std::endl;
	// std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	// std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	// std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	// std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	return 0;
}

