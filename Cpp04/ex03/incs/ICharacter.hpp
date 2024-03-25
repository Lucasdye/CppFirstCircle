/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2005/03/20 12:25:21 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/25 17:56:05 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include "base.hpp"

class ICharacter
{
	protected:
		//-------------------- Static ---------------------------------------//
		static			AMateria *_dropped[50];
		static			unsigned int _totalNbDropp;
		//-------------------- Simple variables -----------------------------//
		std::string		_name;
		unsigned int 	_nbMaterias;
		unsigned int 	_nbMateriasDrop;
		//-------------------- Array ----------------------------------------//
		AMateria		*_stuff[4];

	public:
		//-------------------- Member funcs ---------------------------------//
		virtual void use(int idx, ICharacter& target) = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		
		//-------------------- Set/get --------------------------------------//
			//----- Getters
		std::string  const &getName() const;
		AMateria* 	 const *getDrop() const;
		AMateria*	 const *getStuff() const;
		unsigned int const &getNbMat() const;
		unsigned int const &getNbMatDrop() const;
			//----- Setters
		void	setName(std::string name);
		void	setDrop();
		void	setStuff();
		void	setNbMat();
		void	setNbMatDrop();
		//-------------------- Cons/Des -------------------------------------//
	    ICharacter();
	    ICharacter(ICharacter const &src);
	    ~ICharacter();
		//-------------------- Operators ------------------------------------//
	    ICharacter& operator=(ICharacter const &instance);
};

#endif

