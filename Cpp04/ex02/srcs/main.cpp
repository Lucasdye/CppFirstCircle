/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2004/03/20 10:14:10 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/27 12:36:47 by lbouguet         ###   ########.fr       */
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

void	dogIdeas(Dog **dogs)
{
	size_t	idea1;
	
	//srand(static_cast<size_t>(time(0)));
	idea1 = rand() % 100;
	std::cout << std::endl;
	std::cout << "Dog[0] " << "is thinking about " << dogs[0]->getThought(idea1)
	<< " but he's mainly thinking about " << dogs[0]->getMainThought() << std::endl;
	return ;
}

void	catIdeas(Cat **cats)
{
	size_t	idea1;
	
	idea1 = rand() % 100;
	std::cout << "Cat[0] " << "is thinking about " << cats[0]->getThought(idea1)
	<< " but he's mainly thinking about " << cats[0]->getMainThought() << std::endl;
	std::cout << std::endl;
	return ;
}

int		main()
{
	//--------------------- Tableau polymorph. statique d'éléments dynamiques-//
	Dog	*dogs[25];
	Cat	*cats[25];
	Dog	dogCpy;

	srand(static_cast<size_t>(time(0)));
	//--------------------- Remplissage dynamique ---------------------------//
	for (int i = 0; i < 25; i++)
		dogs[i] = new Dog();
	for (int i = 0; i < 25; i++)
		cats[i] = new Cat();
	std::cout << BLUE << "Allocated dogs and cats" << END_C << std::endl;
	dogIdeas(dogs);
	catIdeas(cats);
	dogCpy = *dogs[0];
	std::cout << std::endl;
	std::cout << "dogCpy " << "is thinking about " << dogCpy.getThought(0)
	<< " but he's mainly thinking about " << dogCpy.getMainThought() << std::endl;
	std::cout << std::endl;
	//--------------------- Deleting objects --------------------------------//
	for (int i = 0; i < 25; i++) 
    	delete dogs[i];
	for (int i = 0; i < 25; i++) 
    	delete cats[i];
	//--------------------- Testing "=" operator ---------------------------//
	// std::cout << std::endl;
	// std::cout << "The dogCpy of Dog[0] " << "is thinking about " << dogs[0]->getThought(rand() % 100)
	// << " but he's mainly thinking about " << dogs[0]->getMainThought() << std::endl;
	// std::cout << std::endl;
	return (SUC);
}


