/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2004/03/20 10:14:10 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/05 09:58:22 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Animal.hpp"
#include "../incs/Dog.hpp"
#include "../incs/Cat.hpp"
#include "../incs/WrongAnimal.hpp"
#include "../incs/WrongCat.hpp"
#include "../../../colors.hpp"

int	main()
{
	//--------------------- Tableau polymorphique statique d'éléments dynamiques ---------------------------//
	Animal 		*animals[50];

	//--------------------- Remplissage dynamique ----------------------------------------------------------//
	for (int i = 0; i < 50; i++)
	{
		if (i < 25)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	//--------------------- Deleting objects ---------------------------------------------------------------//
	for (int i = 0; i < 50; i++)
    	delete animals[i];
	//--------------------- Tableau polymorphique dynamique d'éléments dynamiques --------------------------//
	return (0);
}


