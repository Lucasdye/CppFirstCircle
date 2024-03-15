/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2005/03/20 12:08:09 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/06 16:52:22 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <sstream>
# include <unistd.h>
# include <string>
# include <cstdlib>
# include <iomanip>
# include <fstream>
# include <cmath>
# include <string.h>
# include "AMateria.hpp"

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

