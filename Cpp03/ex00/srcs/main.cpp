/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2029/02/20 14:45:03 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/21 18:10:56 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/ClapTrap.hpp"

int main( void ) {
	
	ClapTrap	riri("Riri");
	ClapTrap	fifi("Fifi");
	
	std::cout << "<-_-^-_-^-_-^-_-^-_-^-_-^-_-^->\n" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == false)
			riri.setAttackDamage(3);	
		riri.attack("Fifi");
		fifi.takeDamage(riri.getAttackPoints());
		fifi.beRepaired(3);
		std::cout << "\n<-_-^-_-^-_-^-_-^-_-^-_-^-_-^->\n" << std::endl;
	}
	return 0;
}


