/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 14:31:26 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/27 14:31:57 by lbouguet         ###   ########.fr       */
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
# include <limits.h>

//-------------------- Classes  ---------------------------------------------//
# include "ICharacter.hpp"
# include "AMateria.hpp"
# include "IMateriaSource.hpp"
# include "Cure.hpp"
# include "Character.hpp"
# include "Ice.hpp"
# include "MateriaSource.hpp"
//-------------------- Aesthetics -------------------------------------------//
# include "colors.hpp"
//-------------------- My funcs proto ---------------------------------------//
bool	idxParsing(unsigned int max, int idx);
bool	checkIntOverflow(std::string &line);
bool	strIsNumeric(std::string str);
void 	drawSpaces(int nb);

#endif 