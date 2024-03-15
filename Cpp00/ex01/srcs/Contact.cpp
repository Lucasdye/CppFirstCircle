/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2031/01/20 16:10:26 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/12 09:56:37 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Contact.hpp"

//-------------------- Member funcs -----------------------------------------//
//-------------------- Set/Get ----------------------------------------------//
std::string Contact::get_contact(size_t option)
{
	if (option == INDEX)
		return (index);
	else if (option == FIRST_NAME)
		return (first_name);
	else if (option == LAST_NAME)
		return (last_name);
	else if (option == PHONE)
		return (phone_number);
	else if (option == NICKNAME)
		return (nickname);
	else if (option == DARK_SEC)
		return (darkest_secret);
	return (NULL);
}

void Contact::set_contact(std::string answer, size_t option)
{
	if (option == INDEX)
		index = answer;
	if (option == FIRST_NAME)
		first_name = answer;
	else if (option == LAST_NAME)
		last_name = answer;
	else if (option == PHONE)
		phone_number = answer;
	else if (option == NICKNAME)
		nickname = answer;
	else if (option == DARK_SEC)
		darkest_secret = answer;
	return ;
}
//-------------------- Constructor/Destructor -------------------------------//
Contact::Contact() :first_name(""), last_name(""), phone_number(""), nickname (""), darkest_secret(""), index("-1")		
{
	std::cout << ITALIC << "Default constructor called for Contact" <<  END_C << std::endl;
	return ;
}

Contact::~Contact()
{
	std::cout <<  ITALIC << "Destructor called for Contact" <<  END_C << std::endl;
	return ;
}

//-------------------- Operators --------------------------------------------//




