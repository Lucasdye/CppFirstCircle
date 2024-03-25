/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2005/03/20 12:08:09 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/25 17:55:40 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "base.hpp"

class Cure : public AMateria
{
	private:
	
	public:
		//-------------------- Member funcs -------------------------------------------//
		Cure*	clone() const;
	    void 	use(ICharacter &target) override;
	
		//-------------------- Cons/Des -------------------------------------//
	    Cure();
	    Cure(std::string type);
	    Cure(Cure const &src);
	    Cure& operator=(Cure const & instance);
	    ~Cure();
		//-------------------- Set/get ------------------------------------------------//
		
		//-------------------- Operators -----------------------------------------//
	};

#endif

