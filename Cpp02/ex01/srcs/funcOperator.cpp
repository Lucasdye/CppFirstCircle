/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcOperator.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 17:14:46 by lbouguet          #+#    #+#             */
/*   Updated: 2024/02/29 11:44:12 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include  "../incs/Fixed.hpp"

std::ostream & operator<<(std::ostream &out, Fixed const &inst)
{
	out << inst.toFloat();
    return (out);
}