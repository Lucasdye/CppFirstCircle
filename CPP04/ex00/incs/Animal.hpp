/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2004/03/20 10:14:10 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/05 10:29:54 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include "base.hpp"

class Animal
{
	protected:
		std::string _type;

	public:
	//-------------------- Methods ------------------------------------------//
		void 		makeSound() const;
	//-------------------- Set/get ------------------------------------------//
		std::string	getType() const;
	//-------------------- Cons/Des -----------------------------------------//
	   				Animal();
	    			Animal(Animal const &src);
	    virtual 	~Animal();
	//-------------------- Operators ----------------------------------------//
	    Animal& operator=(Animal const & instance);
};

#endif

