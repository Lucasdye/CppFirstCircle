/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2031/01/20 16:10:26 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/08 14:39:58 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../incs/Contact.hpp"
# include "../incs/PhoneBook.hpp"

int	main()
{
	PhoneBook phonebook;
	std::string	answer;

	while (!phonebook.exit(answer) && !std::cin.eof())
	{
		phonebook.clear_terminal();
		std::getline(std::cin, answer);
		if (answer == "SEARCH")
			phonebook.search();
		else if (answer == "ADD")
			phonebook.add();
	}
	return (0);
}


