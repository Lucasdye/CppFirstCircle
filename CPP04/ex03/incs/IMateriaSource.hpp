/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2005/03/20 15:56:06 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/08 18:14:58 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#include <iostream>
#include <sstream>
#include <unistd.h>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <string.h>
#include "AMateria.hpp"

class IMateriaSource
{
	protected:
		AMateria	*_learnedMat[4];
	
	public:
		//-------------------- Member funcs -------------------------------------//
		virtual void		learnMateria(AMateria* materia) = 0;
		virtual AMateria	*createMateria(std::string const & type) = 0;
		
		//-------------------- Set/get ------------------------------------------//
		//-------------------- Cons/Des -----------------------------------------//
	    IMateriaSource();
	    IMateriaSource(IMateriaSource const & src);
	    ~IMateriaSource();
		
		//-------------------- Operators ----------------------------------------//
	    IMateriaSource& operator=(IMateriaSource const & instance);
};

#endif
