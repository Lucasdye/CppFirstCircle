/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2031/01/20 16:12:01 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/08 17:03:54 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "colors.hpp"
# include "Contact.hpp"
# include "funcs.hpp"
# include <iostream>
# include <sstream>
# include <unistd.h>
# include <string>
# include <cstdlib>
# include <iomanip>
# include <fstream>
# include <cmath>
# include <cstdlib>

class PhoneBook
{
	private:
		Contact		contact[8];
		void 		head_repertoire();
		void		draw_repertoire();
		void		print_contact(Contact &contact);
		bool 		is_phonebook_empty();
		int			current_index;

	public:
		size_t		exit(std::string answer);
		void		menu_title();
		void 		add();
		void		search();
		void		clear_terminal();
		void		init_contact_index();
	    PhoneBook();
	    ~PhoneBook();
};

#endif

