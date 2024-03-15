#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <sstream>
#include <unistd.h>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <string.h>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public :
	//-------------------- Redeclaration ------------------------------------//
    	FragTrap(std::string name);
		~FragTrap();
    	FragTrap(FragTrap const & src);
		//void attack(const std::string &target);
	//-------------------- Fonctions persos ---------------------------------//
		void highFiveGuys();
	private :
};

#endif