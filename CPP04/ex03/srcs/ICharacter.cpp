/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2005/03/20 12:25:21 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/07 12:17:51 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/ICharacter.hpp"
#include "../incs/Ice.hpp"
#include "../incs/Cure.hpp"

AMateria* ICharacter::_dropped[50] = {nullptr};
//-------------------- Member funcs -----------------------------------------//
//-------------------- Set/Get ----------------------------------------------//
	//----- Setters
void	ICharacter::setName(std::string name)
{
	_name = name;
	return ;
}

void	ICharacter::setDrop()
{
	return ;
}

void	ICharacter::setStuff()
{
	return ;
}

void	ICharacter::setNbMat()
{
	return ;
}

void	ICharacter::setNbMatDrop()
{
	return ;
}
	//----- Getters
std::string  const &ICharacter::getName() const
{
	return (_name);
}

AMateria* 	 const *ICharacter::getDrop() const
{
	return (_dropped);
}

AMateria*	 const *ICharacter::getStuff() const
{
	return (_stuff);
}

unsigned int const &ICharacter::getNbMat() const
{
	return (_nbMaterias);
}

unsigned int const &ICharacter::getNbMatDrop() const
{
	return (_nbMateriasDrop);
}

//-------------------- Constructor/Destructor -------------------------------//

ICharacter::ICharacter(): _name("empty"), _nbMaterias(0), _nbMateriasDrop(0)
{
	std::cout << "Default constructor called for ICharacter" << std::endl;
	//---------- Nullifying pointers
	for (int i; i < 4; i++)
		_stuff[i] = nullptr;
	return ;
}

ICharacter::ICharacter()
{
	std::cout << "Default constructor called for ICharacter" << std::endl;
	return ;
}

ICharacter::ICharacter(ICharacter const &src) : ICharacter()
{
	std::cout << "Copy constructor called for ICharacter" << std::endl;
	//---------- Copy basic var
	_name = src._name;
	_nbMaterias = src._nbMaterias;
	_nbMateriasDrop = src._nbMateriasDrop;
	//---------- Copy arrays
		//------ Stuff deep copy
	for (int i = 0; i < 3; i++)
	{
		if (src._stuff[i] != nullptr)
		{
			if (src._stuff[i]->getType() == "ice")
				_stuff[i] = new Ice(src._stuff[i]->getType());
			else if (src._stuff[i]->getType() == "cure")
				_stuff[i] = new Cure(src._stuff[i]->getType());
		}
		_stuff[i] = src._stuff[i];
	}
	return ;
}

ICharacter::~ICharacter()
{
	std::cout << "Destructor called for Character" << std::endl;
	//----- Deleting materias
	for (int i = 0; i < 4; i++)
	{
		if (_stuff[i] != nullptr)
			delete _stuff[i];
	}
	
	//----- Deleting dropped materias
	for (int i = 0; i < 50; i++)
	{
		if (_dropped[i] != nullptr)
			delete _dropped[i];
	}
	return ;
}

//-------------------- Operators --------------------------------------------//
ICharacter&	ICharacter::operator=(ICharacter const &instance)
{
	std::cout << "Assignment operator called for ICharacter" << std::endl;
	if (this != &instance)
	{
		//----- Copying stuff
		for (int i = 0; i < 3; i++)
		{
			if (instance._stuff[i] != nullptr)
			{
				if (instance._stuff[i]->getType() == "ice")
					_stuff[i] = new Ice(instance._stuff[i]->getType());
				else if (instance._stuff[i]->getType() == "cure")
					_stuff[i] = new Cure(instance._stuff[i]->getType());
			}
			_stuff[i] = instance._stuff[i];
		}
	}
	return *this;
}


