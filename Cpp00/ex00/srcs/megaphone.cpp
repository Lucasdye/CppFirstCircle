/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 16:22:08 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/08 16:54:21 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

/*Notes: 
	std::cout est un objet global qui est une instance de la classe std::ostream, pré-instanciée par la compilation.
	La classe std::ostream redéfinit l'opérateur de surcharge "<<" pour permettre les opérations courantes de 
	flux de sortie/entrée. La classe std::ostream est pré-instanciée à la compilation du programme.
*/

bool isAlphaLowCase(char ch) 
{
    if (ch < 97 || ch > 122)
		return (false);
	return (true);
}

int main(int ac, char *av[])
{	
	std::string str;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else 
	{	
		for (int i = 1; av[i]; i++)
			str += av[i];
		for (size_t i = 0; str[i]; i++)
		{
			if (isAlphaLowCase(str[i]))
				std::cout << (char)std::toupper(str[i]);
			else
				std::cout << str[i];
		}
		std::cout << std::endl;
	}
	return (0);
}