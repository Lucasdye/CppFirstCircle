/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2027/02/20 10:15:58 by lbouguet          #+#    #+#             */
/*   Updated: 2024/02/29 11:21:49 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../incs/base.hpp"

int main( void ) 
{
	Fixed a;
	Fixed const b(10);
	Fixed const c(42.42f);//the "f" precises that it's not a double.
	Fixed const d(b);
	Fixed const e(-42.42f);
	Fixed const f(17000000);
	Fixed const g(0.12f);
	float		fE = 0.12f;
	
	a = Fixed(1234.4321f);
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	std::cout << "e is " << e.toInt() << " as integer" << std::endl;
	std::cout << "f is " << f.toInt() << " as integer" << std::endl;
	std::cout << "g is " << g << " as float" << std::endl;
	std::cout << "g is " << g.toInt() << " as integer" << std::endl;
	std::cout << "g is " << g.toInt() << " as integer" << std::endl;
	std::cout << "fE is " << fE << std::endl;
	return (0);
}