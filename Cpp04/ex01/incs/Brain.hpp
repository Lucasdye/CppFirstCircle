/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2004/03/20 14:37:38 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/25 14:00:48 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include "../incs/base.hpp"

class Brain
{
	private:
		std::string _ideas[100];
	
	public:
		std::string	getIdea(size_t idx);
		std::string	*getIdeas();
	    Brain();
	    Brain(Brain const & src);
	    Brain& operator=(Brain const & instance);
	    ~Brain();
};

#endif

