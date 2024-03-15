/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 19:06:23 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/14 10:31:22 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/base.hpp"

void	testAnnounceHeapZomb(Zombie *heapZombie)
{
	if (heapZombie == NULL)
		return ;
	std::cout << BOLD <<"In testAnnounceHeapZomb():" <<  END_C << std::endl;
	heapZombie->announce();
}

// Zombie	*heapZombie(void)
// {
// 	Zombie	*heapZomb;
// 	heapZomb = new Zombie();
// 	return (heapZomb);

// }

int	main(void)
{
	Zombie	stackZomb1;
	Zombie	stackZomb2("John");
	Zombie	randomChump("RandomChump");
	Zombie	*heapZomb;

	
	stackZomb1.announce();
	stackZomb2.announce();
	randomChump.announce();
	heapZomb = newZombie("Alfred");
	heapZomb->announce();
	testAnnounceHeapZomb(heapZomb);
	delete heapZomb;
	return (SUC);
}