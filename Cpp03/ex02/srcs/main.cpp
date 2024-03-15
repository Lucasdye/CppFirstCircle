/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2029/02/20 14:45:03 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/01 17:41:26 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/ClapTrap.hpp"
#include "../incs/ScavTrap.hpp"
#include "../incs/FragTrap.hpp"

int main(void) 
{
	unsigned int random_nb;
	ClapTrap	falco("Falco 🦅");
	ClapTrap	lucas("Lucas 👱");
	ScavTrap	fox("Fox 🦊");
	FragTrap	roy("Roy 🤴");
	ClapTrap	snake(ScavTrap("Snake 🥷 "));// <= une classe derivee peut
										 	 // etre utilisee la ou un objet
										 	 // de base est attendu (polymorphisme)
	
	snake.setAttackDamage(-10);
	lucas.setAttackDamage(25);
	std::cout << "<-_-^-_-^-_-^-_-^-_-^-_-^-_-^->\n" << std::endl;
	for (int i = 0; i < 12; i++)
	{
		if ( i != 0 && i % 3 == 0)
		{
			std::cout << "⚡⚡⚡ Lucas comes out from nowhere to help Fox kick Snake's ass ⚡⚡⚡" << std::endl;
			lucas.attack("Snake");
			snake.takeDamage(lucas.getAttackPoints());
		}
		if (i != 0 && i % 6 == 0)
		{
			std::cout << "🗡️🗡️🗡️  Roy comes out from nowhere to help Fox kick a random player's ass 🗡️🗡️🗡️" << std::endl;
			random_nb = rand() % 2;
			if (random_nb == 0)
			{
				roy.attack("Fox");
				fox.takeDamage(roy.getAttackPoints());
			}
			if (random_nb == 1)
			{
				roy.attack("Falco");
				falco.takeDamage(roy.getAttackPoints());
			}
			if (random_nb == 2)
			{
				roy.attack("Snake");
				snake.takeDamage(roy.getAttackPoints());
			}
			roy.highFiveGuys();	
		}
		if (i == 4)
			fox.guardGate();
		else
		{
			fox.attack("Falco");
			falco.takeDamage(fox.getAttackPoints());
		}
		if (i % 2)
			falco.beRepaired(50);
		else
		{
			falco.attack("Fox");
			fox.takeDamage(falco.getAttackPoints());
		}
		snake.attack("Fox");
		fox.takeDamage(snake.getAttackPoints());
		std::cout << "\n<-_-^-_-^-_-^-_-^-_-^-_-^-_-^->\n" << std::endl;
	}
	return 0;
}

