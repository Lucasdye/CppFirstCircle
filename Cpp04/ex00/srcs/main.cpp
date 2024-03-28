/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2004/03/20 10:14:10 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/27 10:28:45 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/base.hpp"


int	main()
{
//Animal objects constructed from derived classes Cat and Dog (polymorphisme)//
	const Animal 		*meta = new Animal();
	const Animal 		*i = new Cat();
	const Animal 		*j = new Dog();
	const WrongAnimal 	*wcat = new WrongCat();

	std::cout << BLUE <<"Animal objects constructed from derived classes Cat and Dog (polymorphisme)//" << END_C << std::endl;
	std::cout << meta->getType() << std::endl;
	meta->makeSound();
	std::cout << std::endl;
	std::cout << i->getType() 	<< std::endl;
	i->makeSound();
	std::cout << std::endl;
	std::cout << j->getType() 	<< std::endl;
	j->makeSound();
	std::cout << std::endl;
	std::cout << wcat->getType() << std::endl;
	wcat->makeSound();
	std::cout << std::endl;

//----------Dog and Cat classes constructed from their own constructor-------//
	const Cat* k = new Cat();
	const Dog* l = new Dog();
	
	std::cout << BLUE <<"---------- Dog and Cat classes constructed from their own constructor------//" << END_C << std::endl;
	std::cout << k->getType() << " " << std::endl;
	k->makeSound();
	std::cout << std::endl;
	std::cout <<l->getType() << " " << std::endl;
	l->makeSound();
	std::cout << std::endl;


//--------------------- Deleting objects ------------------------------------//
	std::cout << BLUE <<"//-------------------- Deleting objects --------------------------------------//" << END_C << std::endl;
	delete meta;
	delete wcat;
	delete j;
	delete i;
	delete k;
	delete l;
	return (0);
}


