/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_extra.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 19:06:12 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/13 19:06:15 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/base.hpp"

void stack_zombie(int nb)
{
	int random_nb;
	int idx;
	std::string name[50];

	idx = 0;
	// Opening file
	std::ifstream file("zombie_name.txt");
	// Checking for error
    if (!file.is_open())
	{   
		std::cerr << "Error opening file." << std::endl;
		return ;
	}
	// Fill tab of names from text file
	for (int i = 0; i < 50; i++)
		std::getline(file, name[i]);
	// Seed the random func
	std::srand(0);
	//---- Stack zombies
	while (idx < nb)
	{	
		// Generate random number
		random_nb = rand() % 50;
		// Create stack zombie
		randomChump(name[random_nb]);
		idx++;
	}
	return ;
}

// Zombie **zombie = new Zombie*[nb]; allows polymorphism !The array of pointers can
// have element of diffrent types. We could have different sort of zombies in the same array. 
Zombie **createPtrsHeapOfZombies(int nb)
{
	int random_nb;
	Zombie **zombie = new Zombie*[nb];
	std::string name[50];

	// Opening file
	std::ifstream file("zombie_name.txt");
	// Checking for error
    if (!file.is_open())
	{   
		std::cerr << "Error opening file." << std::endl;
		return (NULL);
	}
	// Fill tab of names from text file
	for (int i = 0; i < 50; i++)
		std::getline(file, name[i]);
	// Seed the random func
	std::srand(0);
	for (int i = 0; i < nb; i++)
	{	
		// Generate random name
		random_nb = rand() % 50;
		// create stack zombie
		zombie[i] = newZombie(name[random_nb]);
		// Zombie announcing
		//zombie[i]->announce();
		//delete zombie;
	}
	return (zombie);
}

int	main()
{
	Zombie						**heapZombies;
	std::istringstream			iss;
	std::string					answerNb;
	std::string 				answerAllocType;
	int							nb;

	
	answerAllocType.clear();
	answerNb.clear();
	std::cout << "\t" << "---------- Welcome ----------" << std::endl;
	std::cout << "\t\t Create stack or heap zombie ? (0/1)" << std::endl;
	//----- 1 choose allocation type
	for (bool flag = false; flag == false;)
	{
		std::getline(std::cin, answerAllocType);
		if (answerAllocType == "0" || answerAllocType == "1")
			flag = true;
		else if (std::cin.eof())
		{	
			std::cout << RED << "Eof detected. Shutting program..." << END_C <<std::endl;
			return (ERR);
		}
		else 
			std::cout << YELLOW << "Wrong option: 0 (stack) or 1 (heap)" << END_C << std::endl;
	}
	//----- 2 choose nb of zombies to create
	std::cout << "How much ?" << std::endl;
	for (bool flag = false; flag == false;)
	{
		iss.clear();
		std::getline(std::cin, answerNb);
		if (answerNb.empty() == false && strIsNumeric(answerNb) == true && checkIntOverflow(answerNb) == false)
		{	
			iss.str(answerNb);
			iss >> nb;
			if (nb <= 0)
				std::cout << YELLOW << "You must create at leat one Zombie" << END_C << std::endl;
			else if (answerAllocType == "1")
			{	
				if (nb > 31250)
					std::cout << YELLOW << "You can't allocate more than 1 Gib worth of Zombies on the heap (no more than 31250 zombies)" << END_C << std::endl;
				else
					flag = true;
			}
			else
				flag = true;
		}
		else if (std::cin.eof())
		{	
			std::cout << RED << "Eof detected. Shutting program..." << END_C <<std::endl;
			return (ERR);
		}
		else
			std::cout << YELLOW << "Entered number is incorrect: non numeric string or int overflow" << END_C << std::endl;
	}
	if (answerAllocType == "0")
		stack_zombie(nb);
	else if (answerAllocType == "1")
	heapZombies = createPtrsHeapOfZombies(nb);
	for (int i = 0; i < nb; i++)
		heapZombies[i]->announce();
	for (int i = 0; i < nb; i++)
		delete heapZombies[i];
	return (SUC);
}