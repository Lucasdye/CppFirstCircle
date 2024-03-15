/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:51:59 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/14 14:08:38 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Harl.hpp"

void Harl::info(void) 
{
	std::cout << BLUE  << "INFO: " << END_C << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	return ;
}

void Harl::debug(void) 
{
    std::cout << "DEBUG: " << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
	return ;
}

void Harl::warning(void) 
{
    std::cout << YELLOW << "WARNING: " << END_C << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	return ;
}

void Harl::error(void)
{
    std::cout << RED << "ERROR: " <<  END_C << "This is unacceptable! I want to speak to the manager now." << std::endl;
	return ;
}

void Harl::complain(std::string level)
{
	std::string complain[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	// Syntax Requirement for Pointers to Member Functions: In C++, 
	// when you're taking the address of a member function 
	// to initialize a pointer to a member function,
	// the syntax requires you to specify the class name followed by ::, 
	// even if you're within the scope of that class. 
	// This syntax distinguishes pointers to member functions 
	// from pointers to regular functions and 
	// enforces at compile time that the function 
	// indeed belongs to the specified class.
	void (Harl::*funcs[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for(size_t i = 0; i < 4; i++)
	{
		if (complain[i] == level)
			(this->*funcs[i])();
	}
	return ;
}
