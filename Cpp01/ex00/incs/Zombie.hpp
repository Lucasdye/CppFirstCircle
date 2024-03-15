#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

class Zombie 
{
	private:
		std::string _name;

	public:
	//-------------------- Member funcs -------------------------------------//
		void		announce();
		
	//-------------------- Set/get ------------------------------------------//
		std::string	getName();
		void		setName(std::string name);

	//-------------------- Cons/Des -----------------------------------------//
		Zombie();
		Zombie(std::string name);
		~Zombie();
	//-------------------- Operators ----------------------------------------//
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);


#endif
