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

# include "base.hpp"

class ScavTrap : public ClapTrap
{
	private :
		bool	_guardGate;

	public :
	// -------------------- Methods -----------------------------------//
		void			attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			guardGate();
	// -------------------- Cons/des -----------------------------------//
						ScavTrap(std::string name);
						ScavTrap(ScavTrap const & src);
						~ScavTrap();

	// -------------------- Operator -----------------------------------//
	ScavTrap&			operator=(ScavTrap const &instance);
};

#endif
