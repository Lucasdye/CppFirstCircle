/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2005/03/20 12:07:48 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/07 10:50:55 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/AMateria.hpp"
#include "../incs/Ice.hpp"
#include "../incs/Cure.hpp"

int	main()
{
	AMateria	*Ice;
	AMateria	*Cure;

	Ice = new Ice("ice");
	Cure = new Cure("cure");
	//----- Delete dropped materias
	for (int i = 0; i < 50; i++)
	{
		if ()
	}
	return (0);
}


