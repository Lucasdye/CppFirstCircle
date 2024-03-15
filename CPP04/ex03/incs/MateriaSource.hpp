/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2005/03/20 16:02:42 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/05 16:26:02 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <iostream>
#include <sstream>
#include <unistd.h>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <string.h>
#include "IMateriaSource.hpp"

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

