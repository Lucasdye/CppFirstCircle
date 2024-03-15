/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2004/03/20 12:20:37 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/04 14:08:42 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/WrongCat.hpp"
#include "../../../colors.hpp"

//-------------------- Member funcs -----------------------------------------//
//-------------------- Set/Get ----------------------------------------------//
//-------------------- Constructor/Destructor -------------------------------//

WrongCat::WrongCat() : WrongAnimal() 
{
	std::cout << ITALIC << "Default constructor called for WrongCat" << END_C << std::endl;
	return ;
}

WrongCat::WrongCat(WrongCat const &src) : WrongAnimal(src)
{
	std::cout << ITALIC << "Copy constructor called for WrongCat" << END_C << std::endl;
	return ;
}

WrongCat::~WrongCat()
{
	std::cout << ITALIC << "Destructor called for WrongCat" << END_C << std::endl;
	return ;
}

//-------------------- Operators --------------------------------------------//


