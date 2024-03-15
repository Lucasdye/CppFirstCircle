/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHord.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 19:07:16 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/13 19:07:18 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/base.hpp"

// What is the difference with the heapZombie ? 
Zombie *zombieHord(int N, std::string name)
{
	Zombie *hord;

	if (N > 31250)
	{
		std::cout << YELLOW << "You can't allocate more than 1 Gib of zombies in the heap, sorry" << std::endl;
		return (NULL);
	}
	hord = new Zombie[N];
	for (int i = 0; i < N; i++)
		hord[i].setName(name);
	return (hord);
}