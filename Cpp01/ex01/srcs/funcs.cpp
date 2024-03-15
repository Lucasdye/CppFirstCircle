/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 19:05:10 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/13 19:05:14 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../incs/base.hpp" 

void drawSpaces(int nb)
{
	if (nb < 0)
		return ;
	for (int i = 0; i < nb; i++)
		std::cout << " ";
	return ;
}

bool strIsNumeric(std::string str)
{
	for (size_t i = 0; i < (size_t)str.size(); i++)
	{
		if (std::isdigit(str[i]) == false)
			return (false);
	}
	return (true);
}

bool	checkIntOverflow(std::string &line)
{
	if (line.size() > 10)
		return (true);
	else if (line.size() == 10)
	{	
		if (line.compare("2147483647") > 0)
			return (true);
	}
	return (false);
}
