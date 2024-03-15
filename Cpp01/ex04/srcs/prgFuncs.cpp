/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prgFuncs.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 19:09:36 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/13 19:09:38 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../incs/base.hpp"

bool	argsParsing(int ac, char **ag)
{
	if (ac < 4)
	{
		std::cout << RED << "Not enough arguments." << END_C << std::endl;
		return (true);
	}
	else if (ac > 4)
	{
		std::cout << RED << "Too much arguments." << END_C << std::endl;
		return (true);
	}
	else if (ag == NULL)
	{
		std::cout << RED << "Array of arguments is NULL." << END_C << std::endl;
		return (true);
	}
	return (false);
}