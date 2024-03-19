#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "base.hpp"

class FragTrap : public ClapTrap
{
	public :
	//-------------------- Cons/Des -----------------------------------------//
    	FragTrap(std::string name);
    	FragTrap(FragTrap const & src);
		~FragTrap();
		void attack(const std::string &target);
	//-------------------- Fonctions persos ---------------------------------//
		void highFiveGuys();
	private :
};

#endif