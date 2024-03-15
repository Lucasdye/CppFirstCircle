/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 19:09:12 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/13 19:09:15 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

//-------------------- Constants -------------------------------------------//
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
# include "TextReplace.hpp"

//-------------------- Aesthetics -------------------------------------------//
# include "colors.hpp"

//-------------------- Prg funcs --------------------------------------------//
bool	argsParsing(int ac, char **av);
bool	fileParsing(int ac, char **av);

//-------------------- Gen funcs --------------------------------------------//
bool	checkIntOverflow(std::string &line);
bool	strIsNumeric(std::string str);
void 	drawSpaces(int nb);

#endif 