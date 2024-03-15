/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2005/03/20 12:08:04 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/06 14:17:46 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <sstream>
# include <unistd.h>
# include <string>
# include <cstdlib>
# include <iomanip>
# include <fstream>
# include <cmath>
# include <string.h>
# include "AMateria.hpp"


class Ice : public AMateria
{
	private:
	
	public:
		//-------------------- Member funcs -------------------------------------//
		Ice* clone() const;
		void use(ICharacter &target) override;
		//-------------------- Set/get ------------------------------------------//
		//-------------------- Canonical form -----------------------------------//
	    Ice();
		Ice(std::string type);
	    Ice(Ice const &src);
	    Ice& operator=(Ice const & instance);
	    ~Ice();
		//-------------------- Operators -----------------------------------------//
};

#endif

