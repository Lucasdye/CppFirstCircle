/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2005/03/20 16:02:42 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/26 19:25:30 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/base.hpp"


//-------------------- Methods ----------------------------------------------//
void 		MateriaSource::learnMateria(AMateria* mat)
{
	_idx = 0;
	if (mat != NULL)
	{
		if (_nbMaterias != 4)
		{
			while (_idx < _nbMaterias)
			{
				_idx++;
			}
			if (mat->getType() == "ice" || mat->getType() == "cure")
				_learnedMat[_idx] = mat->clone();
			if (_nbMaterias != 4 )
					_nbMaterias += 1;
		}
		delete mat;
	}
	return ;
}

AMateria* 	MateriaSource::createMateria(std::string const &type)
{
	int	i;

	if ( _nbMaterias != 0)
		i = _nbMaterias - 1;
	else
		i = 0;
	while ( i >= 0)
	{
		if (_learnedMat[i] &&  _learnedMat[i]->getType() == type)
		{
			return (_learnedMat[i]->clone());
		} 
		i--;
	}
	return (NULL);
}

//-------------------- Set/Get ----------------------------------------------//

AMateria*	MateriaSource::getLearnedMat(int idx) const 
{
	if (idx >= 0 && idx <= 3)
		return (_learnedMat[idx]);
	return (NULL);
}

//-------------------- Constructor/Destructor -------------------------------//
MateriaSource::MateriaSource()
{
	std::cout << "Default constructor called for MateriaSource" << std::endl;
	//---------- Nullyfying arraw of pointers
	for (int i = 0; i < 4; i++)
	{
		_learnedMat[i] = NULL;
	}
	//---------- Simple variables
	_nbMaterias = 0;
	_idx = 0;
	return ;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
	std::cout << "Copy constructor called for MateriaSource" << std::endl;
	for (int i = 0; i < 3; i++)
	{
		if (src._learnedMat[i] != NULL)
		{
			if (src._learnedMat[i]->getType() == "ice")
				_learnedMat[i] = new Ice();
			else if (src._learnedMat[i]->getType() == "cure")
				_learnedMat[i] = new Cure();
		}
		else
			_learnedMat[i] = NULL;
	}
	return ;
}


MateriaSource::~MateriaSource()
{
	std::cout << "Destructor called for MateriaSource" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (_learnedMat[i] != NULL)
			delete _learnedMat[i];
	}
	return ;
}

//-------------------- Operators --------------------------------------------//

MateriaSource&	MateriaSource::operator=(MateriaSource const & instance)
{
	std::cout << "Assignment operator called for MateriaSource" << std::endl;
	if (this != &instance)
	{
		//---------- free learnedMat
		for (int i = 0; i < 4; i++)
		{
			if (_learnedMat[i] != NULL)
				delete _learnedMat[i];
		}
		//---------- Copy learnedMat
		for (int i = 0; i < 4; i++)
		{
			if (instance._learnedMat[i] != NULL)
			{
				if (_learnedMat[i] != NULL)
					delete _learnedMat[i];
				if (instance._learnedMat[i]->getType() == "ice")
					_learnedMat[i] = new Ice();
				else if (instance._learnedMat[i]->getType() == "cure")
					_learnedMat[i] = new Cure();
			}
			else
				_learnedMat[i] = NULL;
		}
	}
	return *this;
}

