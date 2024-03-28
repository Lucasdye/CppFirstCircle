/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2004/03/20 10:14:10 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/27 12:00:27 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/base.hpp"

void	animalIdeas(Animal **animals)
{
	Cat		*ptrDynCastCat;
	Dog		*ptrDynCastDog;
	size_t	idea1;
	size_t	idea2;
	

	srand(static_cast<size_t>(time(0)));
	idea1 = rand() % 100;
	idea2 = rand() % 100;
	while (idea2 == idea1)
		idea2 = rand() % 100;
	std::cout << std::endl;
	std::cout << "Animal1 " << animals[0]->getType() << " is thinking about ";
	ptrDynCastDog = dynamic_cast<Dog*>(animals[0]);
	if (ptrDynCastDog)
		std::cout << ptrDynCastDog->getThought(idea1) << std::endl;
	std::cout << "Animal2 " << animals[25]->getType() << " is thinking about ";
	ptrDynCastCat = dynamic_cast<Cat*>(animals[25]);
	if (ptrDynCastCat)
		std::cout << ptrDynCastCat->getThought(idea2) << std::endl;
	std::cout << std::endl;
	return ;
}

int	main()
{
	std::cout << BLUE << "\tTableau polymorphique statique d'éléments dynamiques tests" << END_C << std::endl;
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
	animalIdeas(animals);
	//--------------------- Deleting objects ----------------------------------------------------------------//
	for (int i = 0; i < 50; i++) 
    	delete animals[i];

	//--------------------- "=" operator tests --------------------------------------------------------------//
	std::cout << BLUE << "\t\"=\" operator tests" << END_C << std::endl;
	Dog basic1;
	Dog tmp1 = basic1;
	Cat basic2;
	Cat tmp2 = basic2;
	
	return (0);
}


