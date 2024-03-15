/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 19:06:43 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/13 19:06:46 by lbouguet         ###   ########.fr       */
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