/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2005/03/20 12:25:21 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/26 15:55:12 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include "base.hpp"

class AMateria;

class ICharacter //Interface
{
	protected:

	public:
		//-------------------- Member funcs ---------------------------------//
		virtual 	void 				use(int idx, ICharacter& target) = 0;
		virtual 	void 				equip(AMateria* m) = 0;
		virtual 	void 				unequip(int idx) = 0;
		
		//-------------------- Set/get --------------------------------------//
			//----- Getters
		virtual 	std::string  const &getName() const = 0;
			//----- Setters
		//-------------------- Cons/Des -------------------------------------//
					//ICharacter();
	    			//ICharacter(ICharacter const &src);
	   			 virtual ~ICharacter() {}
		//-------------------- Operators ------------------------------------//
};

#endif

