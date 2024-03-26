/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2005/03/20 15:56:06 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/26 15:11:38 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#include "base.hpp"


class IMateriaSource //interface
{
	protected:
	
	public:
		//-------------------- Member funcs -------------------------------------//
		virtual void		learnMateria(AMateria* materia) = 0;
		virtual AMateria	*createMateria(std::string const & type) = 0;
		
		//-------------------- Set/get ------------------------------------------//
		//-------------------- Cons/Des -----------------------------------------//
	    virtual ~IMateriaSource();
		
		//-------------------- Operators ----------------------------------------//
};

#endif

