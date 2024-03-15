/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2004/03/20 10:14:10 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/04 14:35:35 by lbouguet         ###   ########.fr       */
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
//Animal objects constructed from derived classes Cat and Dog (polymorphisme)//
	const Animal 		*meta = new Animal();
	const Animal 		*i = new Cat();
	const Animal 		*j = new Dog();
	const WrongAnimal 	*wcat = new WrongCat();
	
	std::cout << BLUE <<" //Animal objects constructed from derived classes Cat and Dog (polymorphisme)//" << END_C << std::endl;
	std::cout << "Type ->" << " " << meta->getType() << " " << std::endl;
	meta->makeSound();
	std::cout << "Type ->" << " " << i->getType() << " " << std::endl;
	i->makeSound();
	std::cout << "Type ->" << " " << j->getType() << " " << std::endl;
	j->makeSound();
	std::cout << "Type ->" << " " << wcat->getType() << " " << std::endl;
	wcat->makeSound();
	
//----------Dog and Cat classes constructed from their own constructor-------//
	const Cat* k = new Cat();
	const Dog* l = new Dog();
	
	std::cout << BLUE <<"//---------- Dog and Cat classes constructed from their own constructor------//" << END_C << std::endl;
	std::cout << "Type ->" << " " << k->getType() << " " << std::endl;
	k->makeSound();
	std::cout << "Type ->" << " " << l->getType() << " " << std::endl;
	l->makeSound();

//--------------------- Deleting objects ------------------------------------//
	std::cout << BLUE <<"//-------------------- Deleting objects --------------------------------------//" << END_C << std::endl;
	delete j;
	delete i;
	delete k;
	delete l;
	
	return (0);
}


