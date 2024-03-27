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

AMateria*		Character::_dropped[50] = {NULL};

//-------------------- Member funcs -----------------------------------------//
void Character::unequip(int idx)
{
	int idxDropped;

	idxDropped = 0;
	//---------- Parsing
	if (idx > 3 || idx < 0)
		return ;
	if (_stuff[idx] == NULL)
		return (static_cast<void>(std::cout << "Stuff index is empty" << std::endl));
	//---------- Dropping item
	while (idxDropped < 50 && _dropped[idxDropped] != NULL)
		idxDropped++;
	if (idxDropped == 50)//Need to clear tab
	{
		for (int i = 0; i < 50; i++)
		{	
			delete _dropped[i];
			_dropped[i] = NULL;
		}
	}
	else
		_dropped[idxDropped] = _stuff[idx];
	//---------- Unequiping
	_stuff[idx] = NULL;
	return ;
}

void Character::use(int idx, ICharacter &target)
{
	//---------- Parsing
	if (idx > 3 || idx < 0)
		return ;
	if (_stuff[idx] == NULL)
		return (static_cast<void>(std::cout << "No materia at this index to be used" << std::endl));
	//---------- Use
	_stuff[idx]->use(target);
	return ;
}

void Character::equip(AMateria* m)
{
	int i;

	i = 0;
	if (m != NULL)
	{
		while ( i < 4 && _stuff[i] != NULL)
			i++;
		if (i == 4)
			(void)(std::cout << "no space left in stuff for materia" << std::endl);
		else
			_stuff[i] = m->clone();
		delete (m);
	}
	return ;
}

//-------------------- Set/Get ----------------------------------------------//
	//----- Setters
void	Character::setName(std::string name)
{
	_name = name;
	return ;
}

// void	Character::setDrop()
// {
// 	return ;
// }

// void	Character::setStuff()
// {
// 	return ;
// }

// void	Character::setNbMat()
// {
// 	return ;
// }

// void	Character::setNbMatDrop()
// {
// 	return ;
// }
	//----- Getters
std::string  const &Character::getName() const
{
	return (_name);
}

int		Character::getDrop() const
{
	int count;

	count = 0;
	for (int i = 0; i < 50; i++)
	{
		if (_dropped[i] != NULL)
			count++;
	}
	return (count);
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
	std::cout << "Parametric constructor called for Character" << std::endl;
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
	for (int i = 0; i < 50; i++)
	{
		if (_dropped[i] != NULL)
		{	
			delete _dropped[i];
			_dropped[i] = NULL;
		}
	}
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




