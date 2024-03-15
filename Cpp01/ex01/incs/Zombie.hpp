#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include "../incs/base.hpp"

class Zombie
{
	private:
		std::string _name;

	public:
		//-------------------- Member funcs ---------------------------------//
		void		announce();

		//-------------------- Set/get --------------------------------------//
		std::string	getName();
		void		setName(std::string name);

		//-------------------- Cons/Des -------------------------------------//
		Zombie();
		~Zombie();

		//-------------------- Operators ------------------------------------//
};

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);
Zombie	*zombieHord(int N, std::string name);

#endif
