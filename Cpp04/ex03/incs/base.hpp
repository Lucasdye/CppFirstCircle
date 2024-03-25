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
# include "Cure.hpp"
# include "ICharacter.hpp"
# include "Character.hpp"
# include "AMateria.hpp"
# include "Cure.hpp"
# include "Ice.hpp"
# include "IMateriaSource.hpp"
# include "MateriaSource.hpp"
# include "World.hpp"
//-------------------- Aesthetics -------------------------------------------//
# include "colors.hpp"
//-------------------- My funcs proto ---------------------------------------//
bool	idxParsing(unsigned int max, int idx);
bool	checkIntOverflow(std::string &line);
bool	strIsNumeric(std::string str);
void 	drawSpaces(int nb);

#endif 