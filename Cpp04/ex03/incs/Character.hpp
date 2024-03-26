/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2006/03/20 10:29:23 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/26 18:20:20 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "base.hpp"

class Character : public ICharacter
{
	private:
		//-------------------- Static ---------------------------------------//
		static	AMateria 		*_dropped[50];
		static	unsigned int 	_totalNbDrop;
		//-------------------- Simple variables -----------------------------//
				std::string		_name;
				unsigned int 	_nbMaterias;
				unsigned int 	_nbMateriasDrop;
		//-------------------- Array ----------------------------------------//
				AMateria		*_stuff[4];

	public:
	//-------------------- Member funcs ------------------------------------//
				void 				equip(AMateria* m);
				void 				unequip(int idx);
				void 				use(int idx, ICharacter& target);

	//-------------------- Set/get ------------------------------------------//
			//----- Getters
				std::string  const &getName() const;
				AMateria* 	 const *getDrop() const;
				AMateria*	 const *getStuff() const;
				unsigned int const &getNbMat() const;
				unsigned int const &getNbMatDrop() const;

			//----- Setters
				void				setName(std::string name);
				void				setDrop();
				void				setStuff();
				void				setNbMat();
				void				setNbMatDrop();

	//-------------------- Cons/Des ------------------------------------------//
    Character(std::string name);
   	Character(Character const &src);
  	~Character();

	//-------------------- Operators ----------------------------------------//
	Character& operator=(Character const &instance);
};

#endif

