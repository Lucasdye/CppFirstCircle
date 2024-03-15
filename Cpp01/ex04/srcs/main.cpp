/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/03/20 14:12:35 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/14 13:43:01 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/base.hpp"

int	main(int ac, char **av)
{
	if (argsParsing(ac, av))
		return (ERR);
	TextReplace txtReplace(av[1], av[2], av[3], ".replace");
	if (txtReplace.openInFile() || txtReplace.openOutFile())
		return (ERR);
	txtReplace.copyFileContent();
	txtReplace.replace();
	txtReplace.transferContent();
	txtReplace.closeInFile();
	txtReplace.closeOutFile();
	return (SUC);
}


