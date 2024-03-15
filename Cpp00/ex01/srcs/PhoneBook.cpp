/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2031/01/20 16:12:01 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/11 11:46:51 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/PhoneBook.hpp"
#include "../incs/colors.hpp"


//-------------------- Member funcs -------------------------------------//
void PhoneBook::init_contact_index()
{
	for (int i = 0; i < 8; i++)
		contact[i].set_contact("-1", INDEX);
}

void PhoneBook::print_contact(Contact &contact)
{
	std::cout << "📒📒📒📒📒" << "Contact"<< "📒📒📒📒📒" << std::endl;
	std::cout << "First_name: " << contact.get_contact(FIRST_NAME) << std::endl;
	std::cout << "Last_name: " << contact.get_contact(LAST_NAME) << std::endl;
	std::cout << "Phone number: " << contact.get_contact(PHONE) << std::endl;
	std::cout << "Nickname: " << contact.get_contact(NICKNAME) << std::endl;
	std::cout << "Darkest secret: " << contact.get_contact(DARK_SEC) << std::endl;
	return ;
}

void PhoneBook::head_repertoire()
{
	std::cout << " ";
	for (int i = 0; i < 43; i++)
		std::cout << "-";
	std::cout << std::endl;
	std::cout << "|";
	draw_spaces(5);
	std::cout <<  BOLD << "Index" << END_C;
	std::cout << "|";
	std::cout << BOLD << "First name" << END_C;
	std::cout << "|";
	draw_spaces(1);
	std::cout << BOLD << "Last name" << END_C;
	std::cout << "|";
	draw_spaces(2);
	std::cout << BOLD << "Nickname" << END_C;
	std::cout << "|";
	std::cout << std::endl;
	std::cout << " ";
	for (int i = 0; i < 43; i++)
		std::cout << "-";
	std::cout << std::endl;
	return ;
}

void PhoneBook::draw_repertoire()
{
	std::string infos;
	size_t		i;
	int			j;
	size_t		option;

	i = 0;
	head_repertoire();
	while (i < 8 && contact[i].get_contact(INDEX) != "-1")
	{	
		option = 0;
		while (option < 4)
		{	
			std::cout << "|";
			infos = contact[i].get_contact(option);
			if (infos.size() > 10)
				infos[9] = '.';
			else	
				draw_spaces(10 - infos.size());
			j = 0;
			while ((int)j < ((int)infos.size()) && j < 10)
			{	
				 std::cout << infos[j];
				 j++;
			}
			option++;
		}
		std::cout << "|";
		std::cout << std::endl;
		i++;
	}
	return ;
}

void PhoneBook::menu_title()
{
	std::cout << "\033[1m" << "\t\t🔶Welcome to your phone book🔶" << "\033[0m" << std::endl;
	std::cout << "\033[3m" << "\t\t  -Type ADD, SEARCH or EXIT-"<< "\033[0m" << std::endl;
}

void PhoneBook::clear_terminal()
{
	system("clear");
	menu_title();
	return ;
}

bool PhoneBook::is_phonebook_empty()
{
	if (contact[0].get_contact(INDEX) == "-1")	
		return (true);
	else
		return (false);
}

void  PhoneBook::search()
{
	std::string	answer;
	int			index;

	std::cout << BOLD << "\t\t🔷Searching contact🔷" << END_C << std::endl;
	draw_repertoire();
	answer.clear();
	while (!std::cin.eof() && answer != "\n")
	{	
		std::cout << std::endl;
		std::cout << "Enter index number or ENTER to exit SEARCH: " << std::endl;
		answer.clear();
		while (answer.empty())
		{
			answer.clear();
			std::getline(std::cin, answer);
			if (is_numeric(answer) == false)
				answer.clear();
			else if (answer == "")
				return ;
		}
		index = std::atoi(answer.c_str());
		if (is_numeric(answer) && index >= 0 && index < 8)
		{
			if (contact[index].get_contact(INDEX) != "-1")
				print_contact(contact[index]);
			else
				std::cout << YELLOW << "Empty index !" << END_C << std::endl;
			answer.clear();
		}
		else
			std::cout << YELLOW << "The phone book only has an index range between 0 ans 7 !" << END_C << std::endl;
	}
	while (answer.empty())
		std::getline(std::cin, answer);
	return ;
}

void  PhoneBook::add()
{
	std::string			answer;
	std::stringstream	str_curr_idx;

	std::cout << "\033[1m" << "\t\t🔷Adding Contact🔷" << "\033[0m" << std::endl;
	current_index++;
	if (current_index == 8)
		current_index = 0;
	str_curr_idx << current_index;
	contact[current_index].set_contact(str_curr_idx.str(), INDEX);
	while (answer.empty() && !std::cin.eof())
	{	
		std::cout << "First name: ";
		std::getline(std::cin, answer);
		while (answer.find('\t') != std::string::npos)
			answer.replace(answer.find('\t'), 1," ");
		contact[current_index].set_contact(answer, FIRST_NAME);
	}
	answer.clear();
	while (answer.empty() && !std::cin.eof())
	{
		std::cout << "Last name: ";
		std::getline(std::cin, answer);
		while (answer.find('\t') != std::string::npos)
			answer.replace(answer.find('\t'), 1," ");
		contact[current_index].set_contact(answer, LAST_NAME);
	}
	answer.clear();
	while (answer.empty() && !std::cin.eof())
	{	
		std::cout << "Nickname: ";
		std::getline(std::cin, answer);
		while (answer.find('\t') != std::string::npos)
			answer.replace(answer.find('\t'), 1," ");
		contact[current_index].set_contact(answer, NICKNAME);
	}
	answer.clear();
	while (answer.empty() && !std::cin.eof())	
	{	
		std::cout << "Phone number: ";
		std::getline(std::cin, answer);
		while (answer.find('\t') != std::string::npos)
			answer.replace(answer.find('\t'), 1," ");
		contact[current_index].set_contact(answer, PHONE);
	}
	answer.clear();
	while(answer.empty() && !std::cin.eof())
	{	
		std::cout << "Darkest secret: ";
		std::getline(std::cin, answer);
		while (answer.find('\t') != std::string::npos)
			answer.replace(answer.find('\t'), 1," ");
		contact[current_index].set_contact(answer, DARK_SEC);
	}
	return ;
}

size_t PhoneBook::exit(std::string answer)
{
	if (answer == "EXIT")
		return (1);
	return (0);
}

//-------------------- Cons/Des ---------------------------------------------//
PhoneBook::PhoneBook()	: current_index(-1)
{
	std::cout << "Default constructor called for PhoneBook" << std::endl;
	return ;
}

PhoneBook::~PhoneBook()
{
	std::cout << "Destructor called for PhoneBook" << std::endl;
	return ;
}

