/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 19:06:34 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/13 19:06:38 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/base.hpp"

Zombie *newZombie(std::string name)
{
	Zombie *heapZombie;

	heapZombie = new Zombie();
	heapZombie->setName(name);
	return (heapZombie);
}