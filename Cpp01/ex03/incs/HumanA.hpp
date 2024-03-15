/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 19:08:04 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/13 19:08:07 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include "base.hpp"

class HumanA
{
	private:
		std::string		_name;
		Weapon const	&_weapon;

	public:
	//-------------------- Methods ------------------------------------------//
		void attack();
	//-------------------- Set/get ------------------------------------------//
	//-------------------- Cons/Des -----------------------------------------//
		HumanA(std::string name, Weapon &weapon); //: name(name), weapon(weapon);
		~HumanA();
	//-------------------- Operators ----------------------------------------//
};

#endif 