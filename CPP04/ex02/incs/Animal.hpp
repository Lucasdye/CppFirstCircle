/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2004/03/20 10:14:10 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/05 15:15:17 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <sstream>
#include <unistd.h>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <string.h>
#include "Brain.hpp"

class Animal 
{
	protected:
	    std::string _type;
	
	public:
	    //-------------------- Member funcs ---------------------------------//
	    virtual void makeSound() const = 0; // Fonction membre virtuelle pure
	    //-------------------- Set/get --------------------------------------//
	    std::string getType() const;
	    //-------------------- Canonical form -------------------------------//
	    Animal();
	    Animal(Animal const &src);
	    Animal& operator=(Animal const &instance);
	    virtual ~Animal() = 0; // Destructeur virtuel pur
};

#endif

