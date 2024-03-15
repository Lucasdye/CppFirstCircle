/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2006/03/20 10:29:23 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/07 12:11:07 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include <sstream>
#include <unistd.h>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <string.h>
#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:

	public:
	//-------------------- Member funcs ------------------------------------//
	void equip(AMateria* m) override;
	void unequip(int idx) override;
	void use(int idx, ICharacter& target) override;
	//-------------------- Set/get ------------------------------------------//
			//----- Getters
			/****** In Abstract ******/
			//----- Setters
			/****** In Abstract ******/
	//-------------------- Cons/Des ------------------------------------------//
    Character(std::string name);
   // Character(Character const &src);
   // ~Character();
	//-------------------- Operators ----------------------------------------//
				/****** In Abstract ******/
};

#endif

