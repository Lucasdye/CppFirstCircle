/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2004/03/20 14:37:38 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/04 16:36:20 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Brain.hpp"

Brain::Brain()
{
	std::cout << "Default constructor called for Brain" << std::endl;
	return ;
}

Brain::Brain(Brain const &src)
{
	std::cout << "Copy constructor called for Brain" << std::endl;
	for (int i = 0; i < 50; i++)
		_ideas[i] = src._ideas[i];
	return ;
}

Brain&	Brain::operator=(Brain const &instance)
{
	std::cout << "Assignment operator called for Brain" << std::endl;
	if (this != &instance)
	{
		for (int i = 0; i < 50; i++)
			_ideas[i] = instance._ideas[i];
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Destructor called for Brain" << std::endl;
	return ;
}


