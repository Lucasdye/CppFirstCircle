/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 19:08:10 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/13 19:08:13 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

# include "base.hpp"

class HumanB
{
	private:
		std::string	_name;
		Weapon		*_weapon;

	public:
	//-------------------- Methods ------------------------------------------//
		void attack();
	//-------------------- Set/get ------------------------------------------//
		void setWeapon(Weapon &weapon);
	//-------------------- Cons/Des -----------------------------------------//
		HumanB(std::string name);
		~HumanB();
	//-------------------- Operators ----------------------------------------//
};

#endif 