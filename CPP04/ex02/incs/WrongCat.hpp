/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2004/03/20 12:20:37 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/05 15:42:45 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include <sstream>
#include <unistd.h>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <string.h>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	protected:


	public:

		//-------------------- Member funcs ---------------------------------//
		//-------------------- Set/get --------------------------------------//
		//-------------------- Canonical form -------------------------------//
    	WrongCat();
   		WrongCat(WrongCat const & src);
    	~WrongCat();

};

#endif

