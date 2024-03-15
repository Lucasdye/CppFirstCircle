/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2029/02/20 14:45:03 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/01 17:03:39 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <sstream>
#include <unistd.h>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <string.h>

class ClapTrap
{
	protected:
		std::string		_name;
		unsigned int	_hitPoints;
		int				_energyPoints;
		int				_attackDamage;

	public:
//-------------------- Member funcs -----------------------------------------//
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
//-------------------- Set/get ----------------------------------------------//
		int		getAttackPoints();
		void	setEnergyPoints();
		void	setAttackDamage(int value);
//-------------------- Canonical form ---------------------------------------//
    	ClapTrap(std::string name);
    	ClapTrap(ClapTrap const &src);
    	ClapTrap& operator=(ClapTrap const &instance);
    	~ClapTrap();
};

#endif

