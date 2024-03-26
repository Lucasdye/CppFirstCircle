/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2006/03/20 10:29:23 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/26 19:44:31 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/base.hpp"

AMateria* Character::_dropped[50] = {NULL};
unsigned int Character::_totalNbDrop = 0;
//-------------------- Member funcs -----------------------------------------//
void Character::unequip(int idx)
{
	//---------- Parsing
	if (idxParsing(3, idx))
		return ;
	if (_nbMaterias == 0)
		return ((void)(std::cout << BLUE <<  "Can't unequip Character's equipement, it's empty" << END_C  <<std::endl));
	//---------- Dropping item
	if (_nbMateriasDrop == 50)
	{
		//---------- Free memory
		while (_nbMateriasDrop != 0)
			delete _dropped[--_nbMateriasDrop];
		//---------- Reinit dropped mat elements at nullptr
		for (int i = 0; i < 50; i++)
			_dropped[i] = NULL;
	}
	_dropped[_nbMateriasDrop] = _stuff[idx];
	//---------- Unequiping
	_stuff[idx] = NULL;
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
	if (_nbMaterias <= 3)
	{
		_stuff[_nbMaterias] = m->clone();
		// std::cout << "test: " << _stuff[_nbMaterias]->getType() << std::endl;
		_nbMaterias++;
	}
	delete (m);
	return ((void)(std::cout << "no space left for materia" << std::endl));
}

//-------------------- Set/Get ----------------------------------------------//
	//----- Setters
void	Character::setName(std::string name)
{
	_name = name;
	return ;
}

void	Character::setDrop()
{
	return ;
}

void	Character::setStuff()
{
	return ;
}

void	Character::setNbMat()
{
	return ;
}

void	Character::setNbMatDrop()
{
	return ;
}
	//----- Getters
std::string  const &Character::getName() const
{
	return (_name);
}

AMateria* 	 const *Character::getDrop() const
{
	return (_dropped);
}

AMateria*	 const *Character::getStuff() const
{
	return (_stuff);
}

unsigned int const &Character::getNbMat() const
{
	return (_nbMaterias);
}

unsigned int const &Character::getNbMatDrop() const
{
	return (_nbMateriasDrop);
}

//-------------------- Constructor/Destructor -------------------------------//

Character::Character(Character const &src)
{
	std::cout << "Copy constructor called for Character" << std::endl;
	//---------- Copy basic var
	// _name = src._name;
	// _nbMaterias = src._nbMaterias;
	// //_nbMateriasDrop = src._nbMateriasDrop;
	// //---------- Copy arrays
	// 	//------ Stuff deep copy
	// for (int i = 0; i < 3; i++)
	// {
	// 	if (src._stuff[i] != NULL)
	// 	{
	// 		if (src._stuff[i]->getType() == "ice")
	// 			_stuff[i] = new Ice();
	// 		else if (src._stuff[i]->getType() == "cure")
	// 			_stuff[i] = new Cure();
	// 	}
	// 	else
	// 		_stuff[i] = NULL;
	// 	//_stuff[i] = src._stuff[i];
	// }
	for (int i = 0; i < 4; i++)
		_stuff[i] = NULL;
	*this = src;
	return ;
}

Character::Character(std::string name): _name(name), _nbMaterias(0), _nbMateriasDrop(0)
{
	std::cout << "Default constructor called for Character" << std::endl;
	//---------- Nullifying pointers
	for (int i = 0; i < 4; i++)
		_stuff[i] = NULL;
	return ;
}

Character::~Character()
{
	std::cout << "Default constructor called for Character" << std::endl;
	
	//---------- Free _stuff memory
	for (int i = 0; i < 4; i++)
	{
		if (_stuff[i] != NULL)
			delete _stuff[i];
	}
	//---------- Free Dropped materias from deleted player
	for (int i = _totalNbDrop - 1; i != (static_cast<int>(_totalNbDrop - 1 )- static_cast<int>(_nbMateriasDrop)); i--)
	{
		if (_dropped[i] != NULL)
			delete _dropped[i];
	}
	_totalNbDrop -= _nbMateriasDrop;
	return ;
}

Character& 		Character::operator=(Character const &instance)
{
	//---------- Free _stuff memory
	for (int i = 0; i < 4; i++)
	{
		if (_stuff[i] != NULL)
			delete _stuff[i];
	}
	//---------- Copy stuff
	for (int i = 0; i < 4; i++)
	{
		if (instance._stuff[i] != NULL)
			this->_stuff[i] = instance._stuff[i]->clone();
		else
			_stuff[i] = NULL;
	}
	//---------- Copy simple variables
	_name = instance._name;
	_nbMaterias = instance._nbMaterias;
	_nbMateriasDrop = instance._nbMateriasDrop;
	return *this;
}




