/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   World.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2006/03/20 17:21:32 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/06 17:25:09 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENV_HPP
# define ENV_HPP

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

class World
{
	private:
		

	public:
	
		//-------------------- Member funcs -------------------------------------//
		//-------------------- Set/get ------------------------------------------//
		//-------------------- Cons/Des -----------------------------------------//
	    World();
	    World(World const &src);
	    ~World();
		//-------------------- Operators ----------------------------------------//
	    World& operator=(World const & instance);
	
};

#endif

