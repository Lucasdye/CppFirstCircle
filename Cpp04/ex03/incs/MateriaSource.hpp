/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2005/03/20 16:02:42 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/26 19:12:25 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "base.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria		*_learnedMat[4];
		size_t			_idx;
		unsigned int	_nbMaterias;
	
	public:
	//-------------------- Methods ------------------------------------------//
	void 		learnMateria(AMateria*);
	AMateria* 	createMateria(std::string const & type);
	//-------------------- Set/get ------------------------------------------//
	AMateria* 	getLearnedMat(int idx) const;
	//-------------------- Cons/Des -----------------------------------------//
		MateriaSource();
    	MateriaSource(MateriaSource const & src);
    	~MateriaSource();
	//-------------------- Operators ----------------------------------------//
    	MateriaSource& operator=(MateriaSource const & instance);

};

#endif

