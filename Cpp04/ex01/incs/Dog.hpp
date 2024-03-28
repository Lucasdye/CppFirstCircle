/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2004/03/20 10:14:22 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/27 10:56:53 by lbouguet         ###   ########.fr       */
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
	void 		makeSound() const;
	//-------------------- Set/get ------------------------------------------//
	std::string	getThought(size_t idx);
	//-------------------- Cons/Des -----------------------------------------//
				Dog();
				Dog(Dog const & src);
	    		~Dog();
	//-------------------- Operators ----------------------------------------//
		Dog& operator=(Dog const & instance);
};

#endif

