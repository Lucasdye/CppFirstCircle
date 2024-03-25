/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2005/03/20 16:02:42 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/25 17:56:31 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "base.hpp"

class MateriaSource
{
private:

public:

    MateriaSource();
    MateriaSource(MateriaSource const & src);
    MateriaSource& operator=(MateriaSource const & instance);
    ~MateriaSource();

};

#endif

