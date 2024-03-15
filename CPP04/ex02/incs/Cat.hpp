/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2004/03/20 10:14:18 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/04 17:58:32 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

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

class Cat : public Animal
{
	protected:
		Brain *_ideas;
	
	public:
	//-------------------- Member funcs -----------------------------------------//
		virtual void makeSound() const;
	//-------------------- Constructor/Destructor -------------------------------//
	    Cat();
	    Cat(Cat const & src);
	    ~Cat();
	//-------------------- Operators --------------------------------------------//
	//-------------------- Set/get ----------------------------------------------//
		Brain *getIdeasPtr();
};

#endif

