/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 14:31:05 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/27 14:31:06 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

//-------------------- Constants -------------------------------------------//
	//----- Return
# ifndef SUC
#  define SUC 0
# endif

# ifndef ERR
#  define ERR -1
# endif

//-------------------- CPP libraries ----------------------------------------//
# include <iostream>
# include <sstream>
# include <unistd.h>
# include <string>
# include <cstdlib>
# include <iomanip>
# include <fstream>
# include <cmath>
# include <cstdlib>
# include <limits>

//-------------------- Classes  ---------------------------------------------//
# include "Animal.hpp"
# include "Brain.hpp"
# include "Cat.hpp"
# include "Dog.hpp"
# include "WrongAnimal.hpp"
# include "WrongCat.hpp"

//-------------------- Aesthetics -------------------------------------------//
# include "colors.hpp"

//-------------------- My funcs proto ---------------------------------------//
bool	checkIntOverflow(std::string &line);
bool	strIsNumeric(std::string str);
void 	drawSpaces(int nb);

#endif 