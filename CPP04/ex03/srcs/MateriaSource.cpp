/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 05/03/2024 16:02:42 by lbouguet          #+#    #+#             */
/*   Updated: 05/03/2024 16:02:42 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/MateriaSource.hpp"

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


