/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2004/03/20 12:20:32 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/27 10:11:08 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include "base.hpp"

class WrongAnimal
{
	protected:
		std::string	_type;
	
	public:
	//-------------------- Methods ------------------------------------------//
		void 		makeSound() const;
	//-------------------- Set/get ------------------------------------------//
		std::string getType() 	const;
	//-------------------- Cons/Des -----------------------------------------//
	    			WrongAnimal();
	    			WrongAnimal(WrongAnimal const & src);
	virtual			~WrongAnimal();
	//-------------------- Operators ----------------------------------------//
	    WrongAnimal& operator=(WrongAnimal const & instance);
};

#endif

