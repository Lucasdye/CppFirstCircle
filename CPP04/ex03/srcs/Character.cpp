/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2006/03/20 10:29:23 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/07 12:17:16 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Character.hpp"
#include "../incs/ICharacter.hpp"
#include "../incs/funcs.hpp"
#include "../../colors.hpp"


//-------------------- Member funcs -----------------------------------------//
void Character::unequip(int idx)
{
	//---------- Parsing
	if (idxParsing(3, idx))
		return ;
	if (_nbMaterias == 0)
		return ((void)(std::cout << RED <<  "Can't unequip Character's equipement, it's empty" << std::endl));
	//---------- Dropping item
	if (_nbMateriasDrop >= 50)
	{
		//---------- Free memory
		while (_nbMateriasDrop != 0)
			delete _dropped[--_nbMateriasDrop];
		//---------- Reinit dropped mat elements at nullptr
		for (int i = 0; i < 50; i++)
			_dropped[i] = nullptr;
	}
	_dropped[_nbMateriasDrop] = _stuff[idx];
	//---------- Unequiping
	_stuff[idx] = nullptr;
	_nbMaterias--;
	return ;
}

void Character::use(int idx, ICharacter &target)
{
	//---------- Parsing
	if (idxParsing(3, idx))
		return ;
	if (_nbMaterias == 0)
		return ((void)(std::cout << "No materia to be used" << std::endl));
	//---------- Use
	_stuff[idx]->use(target); 
	return ;
}

void Character::equip(AMateria* m)
{
	if (_nbMaterias > 3)
		return ((void)(std::cout << "no space left for materia" << std::endl));
	_stuff[_nbMaterias] = m;
}
//-------------------- Set/Get ----------------------------------------------//
/********************** In Abstract ******************************************/

//-------------------- Constructor/Destructor -------------------------------//
Character::Character(std::string name): ICharacter()
{
	std::cout << "Default constructor called for Character" << std::endl;
	_name = name;
	return ;
}






