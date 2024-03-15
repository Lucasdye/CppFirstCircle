#include "../incs/ClapTrap.hpp"
#include "../incs/FragTrap.hpp"

//-------------------- Constructor/Destructor ---------------------------------//
FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "🤖 Default constructor called for FragTrap 🤖" << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const &src): ClapTrap(src)
{ 
	std::cout << "🤖 Copy constructor called for FragTrap 🤖" << std::endl;
	return ;
}


FragTrap::~FragTrap()
{
	std::cout << "🤖 Destructor called for FragTrap 🤖" << std::endl;
	return ;
}

//-------------------- Fonctions persos -------------------------------------//

void FragTrap::highFiveGuys()
{
	std::cout << _name << " obnouxiously highfives the players his destroying" << std::endl;
	return ;
}