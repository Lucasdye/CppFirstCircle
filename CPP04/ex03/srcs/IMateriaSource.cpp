/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 05/03/2024 15:56:06 by lbouguet          #+#    #+#             */
/*   Updated: 05/03/2024 15:56:06 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/IMateriaSource.hpp"

IMateriaSource::IMateriaSource()
{
	std::cout << "Default constructor called for IMateriaSource" << std::endl;
}

IMateriaSource::IMateriaSource(IMateriaSource const & src)
{
	std::cout << "Copy constructor called for IMateriaSource" << std::endl;
}

IMateriaSource&	IMateriaSource::operator=(IMateriaSource const & instance)
{
	std::cout << "Assignment operator called for IMateriaSource" << std::endl;
	if (this != &instance)
	{
	}
	return *this;
}

IMateriaSource::~IMateriaSource()
{
	std::cout << "Destructor called for IMateriaSource" << std::endl;
}


