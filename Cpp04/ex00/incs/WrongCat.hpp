/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2004/03/20 12:20:37 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/25 10:01:51 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "base.hpp"

class WrongCat : public WrongAnimal
{
	private:


	public:
	//-------------------- Methods ------------------------------------------//
	//-------------------- Set/get ------------------------------------------//
	//-------------------- Cons/Des -----------------------------------------//
    	WrongCat();
   		WrongCat(WrongCat const & src);
    	~WrongCat();
	//-------------------- Operators ----------------------------------------//
	    WrongCat& operator=(WrongCat const & instance);

};

#endif

