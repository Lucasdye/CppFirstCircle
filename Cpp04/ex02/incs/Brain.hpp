/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2004/03/20 14:37:38 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/25 15:36:25 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include "../incs/base.hpp"

class Brain
{
	private:
		std::string _ideas[100];
		std::string _mainIdea;
	
	public:
		std::string		getIdea(size_t idx);
		void			setMainIdea(std::string main_thought);
		std::string&	getMainIdea();
		std::string		*getIdeas();
	    Brain();
	    Brain(Brain const & src);
	    Brain& operator=(Brain const & instance);
	    ~Brain();
};

#endif

