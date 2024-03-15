/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2004/03/20 10:14:22 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/04 17:58:38 by lbouguet         ###   ########.fr       */
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
		Brain *_ideas;
		
	public:
	//-------------------- Member funcs -----------------------------------------//
	virtual void makeSound() const;
	//-------------------- Set/get ----------------------------------------------//
		Brain *getIdeasPtr();
	//-------------------- Constructor/Destructor -------------------------------//
	    Dog();
	    Dog(Dog const & src);
	    ~Dog();
	//-------------------- Operators --------------------------------------------//	
};

#endif

