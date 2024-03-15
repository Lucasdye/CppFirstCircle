/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2029/02/20 16:33:47 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/01 16:16:38 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <sstream>
#include <unistd.h>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <string.h>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public :
	//-------------------- Redeclaration ------------------------------------//
    	ScavTrap(std::string name);
		~ScavTrap();
    	ScavTrap(ScavTrap const & src);
		void attack(const std::string &target);
	//-------------------- Fonctions persos ---------------------------------//
		void guardGate();
	private :
};

#endif

