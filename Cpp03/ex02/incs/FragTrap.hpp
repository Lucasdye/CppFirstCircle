#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "base.hpp"

class FragTrap : public ClapTrap
{
	private :
	
	public :
	//-------------------- Methods ------------------------------------------//
		void		attack(const std::string &target);
		void		highFivesGuys();
	//-------------------- Set/get ------------------------------------------//
	//-------------------- Cons/Des -----------------------------------------//
					FragTrap(std::string name);
					FragTrap(FragTrap const & src);
					~FragTrap();
	//-------------------- Operators ----------------------------------------//
	FragTrap&		operator=(FragTrap const &instance);
};

#endif