/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2004/03/20 10:14:22 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/04 11:57:04 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <sstream>
#include <unistd.h>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <string.h>
#include "../incs/Animal.hpp"

class Dog : public Animal
{
	protected:
	
	public:
	//-------------------- Member funcs -----------------------------------------//
	//-------------------- Constructor/Destructor -------------------------------//
	    Dog();
	    Dog(Dog const & src);
	    ~Dog();
	//-------------------- Operators --------------------------------------------//
	   // Dog& operator=(Dog const & instance);
	
};

#endif

