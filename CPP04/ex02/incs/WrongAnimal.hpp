/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2004/03/20 12:20:32 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/05 15:42:31 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <sstream>
#include <unistd.h>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <string.h>

class WrongAnimal
{
	protected:
		std::string	_type;
	
	public:
	
		//-------------------- Member funcs -------------------------------------//
		void makeSound() const;
		//-------------------- Set/get ------------------------------------------//
		std::string getType() const;
		//-------------------- Canonical form -----------------------------------//
	    WrongAnimal();
	    WrongAnimal(WrongAnimal const & src);
	    WrongAnimal& operator=(WrongAnimal const & instance);
	    ~WrongAnimal();
};

#endif

