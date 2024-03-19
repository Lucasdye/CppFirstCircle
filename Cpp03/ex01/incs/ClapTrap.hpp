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

# include "base.hpp"

class ClapTrap
{
	protected:
		std::string		_name;
		unsigned int	_hitPoints;
		int				_energyPoints;
		int				_attackDamage;

	public:
	// -------------------- Methods -------------------------------------------//
		void virtual	attack(const std::string& target);
		void virtual	takeDamage(unsigned int amount);
		void 			beRepaired(unsigned int amount);
	// -------------------- Set/get -------------------------------------------//
		unsigned int	getAttackPoints();
		unsigned int	getHitPoints();
		std::string		getName();
		void			setEnergyPoints(int value);
		void			setAttackDamage(int value);
	// -------------------- Cons/Des ------------------------------------------//
    					ClapTrap(std::string name);
    					ClapTrap(ClapTrap const &src);
    					~ClapTrap();
	// -------------------- Operators ------------------------------------//
    	ClapTrap&		operator=(ClapTrap const &instance);

};

#endif

