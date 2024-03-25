/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2029/02/20 14:45:03 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/22 16:56:21 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/base.hpp"

bool	lastSurvivor(ClapTrap *player[])
{
	unsigned int countRemaningPlayers;

	countRemaningPlayers = 0;
	for (int i = 0; i < 5; i++)
	{
		if (player[i]->getHitPoints() != 0)
			countRemaningPlayers++;
	}
	if (countRemaningPlayers == 1)
		return (true);
	else
		return (false);
}


int main(void) 
{
	ClapTrap		falco("Falco 🦅");
	ScavTrap		lucas("Lucas 👱");
	ScavTrap		fox("Fox 🦊");
	ClapTrap		snake(ScavTrap("Snake 🥷 "));// <= une classe derivee peut
	FragTrap		link("Link 🧝");   			 // etre utilisee la ou un objet								 	 					
	ClapTrap		*player[5];	     		 	 // de base est attendu.(polymorphisme)
	unsigned int	randomValueAttacker;		 // MAIS SLICING SI PAR COPIE !
	unsigned int	randomValueTarget;

	player[0] = &falco;
	player[1] = &lucas;
	player[2] = &fox;
	player[3] = &snake;
	player[4] = &link;

	srand(static_cast<unsigned int>(time(0)));
	std::cout << "<-_-^-_-^-_-^-_-^-_-^-_-^-_-^->\n" << std::endl;
	for (int i = 0; i < 80 && !lastSurvivor(player); i++)
	{

		randomValueAttacker = rand() % 5;
		randomValueTarget = rand() % 5;
		while (randomValueTarget == randomValueAttacker)
			randomValueTarget = rand() % 5;
		if ((i % 2 == 0) && (randomValueAttacker == 1 || randomValueAttacker == 2 || randomValueAttacker == 3))
		{	
			// ---- Security aks ptr intermediate (dynamic_cast could fail) 
			ScavTrap *ptrScav = dynamic_cast<ScavTrap*>(player[randomValueAttacker]);
			if (ptrScav)
				ptrScav->guardGate();		
		}
		else if ((i % 2 == 0) && (randomValueAttacker == 0))
		{
			if ((i % 4 == 0))
				player[randomValueAttacker]->beRepaired(25);
			player[randomValueAttacker]->setAttackDamage(50);
		}
		player[randomValueAttacker]->attack(player[randomValueTarget]->getName());
		player[randomValueTarget]->takeDamage(player[randomValueAttacker]->getAttackPoints());
		if ((i % 2 == 0) && randomValueAttacker == 0)
			player[randomValueAttacker]->setAttackDamage(-50);
		
		std::cout << "\n<-_-^-_-^-_-^-_-^-_-^-_-^-_-^->\n" << std::endl;
	}
	std::cout << "🌟🌟🌟🌟🌟🌟🌟🌟The winners are🌟🌟🌟🌟🌟🌟🌟🌟" <<std::endl << std::endl;
	if (falco.getHitPoints())
		std::cout << "\t\t   " << falco.getName() << std::endl;
	if (lucas.getHitPoints())
		std::cout << "\t\t   " << lucas.getName() << std::endl;
	if (fox.getHitPoints())
		std::cout << "\t\t   " << fox.getName() << std::endl;
	if (snake.getHitPoints())
		std::cout << "\t\t   " << snake.getName() << std::endl;
	if (link.getHitPoints())
	{	
		std::cout << "\t\t   " << link.getName() << std::endl;
		link.highFivesGuys();
		std::cout << std::endl;
	}
	std::cout << std::endl;
	return (SUC);
}

