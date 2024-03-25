/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2004/03/20 10:14:22 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/25 15:32:38 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "base.hpp"

class Dog : public Animal
{
	private:
		Brain	*_brain;
	
	public:
	//-------------------- Methods ------------------------------------------//
	//-------------------- Set/get ------------------------------------------//
	std::string	getThought(size_t idx);
	std::string	getMainThought();
	void 		makeSound() const;
	std::string	getType() const;
	
	//-------------------- Cons/Des -----------------------------------------//
				Dog();
				Dog(Dog const & src);
	    		~Dog();
	//-------------------- Operators ----------------------------------------//
		Dog& operator=(Dog const & instance);
};

#endif

