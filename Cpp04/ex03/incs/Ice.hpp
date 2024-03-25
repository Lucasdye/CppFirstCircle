/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2005/03/20 12:08:04 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/25 17:55:53 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "base.hpp"

class Ice : public AMateria
{
	private:
	
	public:
		//-------------------- Member funcs -------------------------------------//
		Ice*		clone() const override;
		void 		use(ICharacter&	target) override;
		//-------------------- Set/get ------------------------------------------//
		//-------------------- Canonical form -----------------------------------//
	   				Ice();
					Ice(std::string type);
	   				Ice(Ice const &src);
	   				~Ice();
		//-------------------- Operators -----------------------------------------//
	    Ice& 		operator=(Ice const & instance);
};

#endif

