/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2004/03/20 10:14:18 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/27 10:33:49 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "base.hpp"

class Cat : public Animal
{
	private:
		Brain	*_brain;
	public:
	//-------------------- Methods ------------------------------------------//
	void 		makeSound() const;
	//-------------------- Set/get ------------------------------------------//
	std::string	getThought(size_t idx);
	//-------------------- Cons/Des -----------------------------------------//
				Cat();
				Cat(Cat const & src);
				~Cat();
	//-------------------- Operators ----------------------------------------//
		Cat& operator=(Cat const& instance);
};

#endif

