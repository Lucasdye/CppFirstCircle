/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2005/03/20 16:02:42 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/25 17:57:54 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/base.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "Default constructor called for MateriaSource" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
	std::cout << "Copy constructor called for MateriaSource" << std::endl;
}

MateriaSource&	MateriaSource::operator=(MateriaSource const & instance)
{
	std::cout << "Assignment operator called for MateriaSource" << std::endl;
	if (this != &instance)
	{
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	std::cout << "Destructor called for MateriaSource" << std::endl;
}


