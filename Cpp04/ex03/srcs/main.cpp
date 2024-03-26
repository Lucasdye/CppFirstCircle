/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2005/03/20 12:07:48 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/26 19:45:01 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../incs/base.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	Character* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	Character* bob = new Character(*me);
	// bob->unequip(0); --> _nbMateria = 1
	// me->use(0, *bob);
	// me->use(1, *bob);
	// me->use(8, *bob);
	// bob->use(0, *me);
	// bob->use(1, *me);
	delete bob;
	delete me;
	delete src;
	return 0;
}


