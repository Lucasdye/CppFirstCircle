/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 19:05:49 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/13 19:05:50 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "../incs/base.hpp"

void randomChump(std::string name)
{
	Zombie newZombie;
	
	newZombie.setName(name);
	newZombie.announce();
	return ;
}