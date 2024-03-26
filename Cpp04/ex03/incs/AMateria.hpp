/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2005/03/20 12:07:48 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/26 17:45:25 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "base.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string _type;

	public:
	//-------------------- Member funcs -------------------------------------//
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter &target);

	//-------------------- Set/get ------------------------------------------//
		std::string const	&getType() const;
		void				setType(std::string string);

	//-------------------- Constructors/Destructor --------------------------//
					 		AMateria(std::string const &type);
	 						AMateria();
	    					AMateria(AMateria const &src);
	    					virtual ~AMateria();

	//-------------------- Operators ----------------------------------------//
		AMateria&			operator=(AMateria const & instance);
};

#endif 

