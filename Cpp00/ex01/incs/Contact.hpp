/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2031/01/20 16:10:26 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/08 13:48:07 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "colors.hpp"
# include <iostream>
# include <sstream>
# include <unistd.h>
# include <string>
# include <cstdlib>
# include <iomanip>
# include <fstream>
# include <cmath>
# include <string.h>
# include "funcs.hpp"

# ifndef INDEX
#  define INDEX 0
# endif
# ifndef FIRST_NAME
#  define FIRST_NAME 1
# endif
# ifndef LAST_NAME
#  define LAST_NAME 2
# endif
# ifndef NICKNAME
#  define NICKNAME 3
# endif
# ifndef PHONE
#  define PHONE 4
# endif
# ifndef DARK_SEC
#  define DARK_SEC 5
# endif


class Contact
{
private:
	std::string first_name;
	std::string last_name;
	std::string phone_number;
	std::string nickname;
	std::string darkest_secret;
	std::string	index;

public:
	std::string get_contact(size_t option);
	void 		set_contact(std::string answer, size_t option);
    Contact();
    ~Contact();
};

#endif

