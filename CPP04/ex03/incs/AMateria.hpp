/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2005/03/20 12:07:48 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/07 11:42:54 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <sstream>
# include <unistd.h>
# include <string>
# include <cstdlib>
# include <iomanip>
# include <fstream>
# include <cmath>
# include <string.h>
# include "ICharacter.hpp"
# include "Ice.hpp"
# include "Cure.hpp"

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
	    ~AMateria();

	//-------------------- Operators ----------------------------------------//
		AMateria& operator=(AMateria const & instance);
};

#endif 

