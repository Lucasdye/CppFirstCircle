/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2029/02/20 14:45:03 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/21 16:59:22 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include "base.hpp" 

class ClapTrap
{
	private:
		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;

	public:
	// -------------------- Methods		 ----------------------------------------//
		void 			attack(const std::string& target);
		void 			takeDamage(unsigned int amount);
		void 			beRepaired(unsigned int amount);
	// -------------------- Set/get -------------------------------------------//
		unsigned int	getAttackPoints();
		unsigned int	getHitPoints();
		void			setAttackDamage(int value);
	// -------------------- Cons/Des --------------------------------------------//
    	ClapTrap(std::string name);
    	ClapTrap(ClapTrap const & src);
    	~ClapTrap();
	// -------------------- Operator --------------------------------------------//
    	ClapTrap& operator=(ClapTrap const & instance);

};

#endif

