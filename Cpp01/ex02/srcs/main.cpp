/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 19:07:40 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/13 19:07:43 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/base.hpp"

int main()
{	
	std::string str;
	std::string *stringPTR;
	std::string	&stringREF = str;

	str = "HI THIS IS BRAIN";
	stringPTR = &str;
	stringREF = str;

	// Printing addr
	std::cout << "Printing addresses :" << std::endl;
	std::cout << "str :" << &str << std::endl;
	std::cout << "ptr :" << stringPTR << std::endl;
	std::cout << "ref :" << &stringREF << std::endl;

	std::cout << std::endl;

	// Printing values
	std::cout << "Printing values :" << std::endl;
	std::cout << "str :" << str << std::endl;
	std::cout << "ptr :" << *stringPTR << std::endl;
	std::cout << "ref :" << stringREF << std::endl;
	return (SUC);
}