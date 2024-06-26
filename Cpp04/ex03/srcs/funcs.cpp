/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 17:57:13 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/26 15:45:30 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/base.hpp"

bool	idxParsing(unsigned int max, int idx)
{
	if (idx < 0)
		return ((void)(std::cout << RED <<  "index is negative" << std::endl), 
				true);
	else if (static_cast<unsigned int>(idx) > static_cast<unsigned int>(max))
		return ((void)(std::cout << RED <<  "int 'idx' from unequip(int idx) can't be over value 3" << std::endl),
				 true);
	return (false);
}