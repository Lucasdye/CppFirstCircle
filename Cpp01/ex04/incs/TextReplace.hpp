/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TextReplace.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/03/20 14:12:35 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/13 17:30:44 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEXTREPLACE_HPP
# define TEXTREPLACE_HPP

# include "../incs/base.hpp"

class TextReplace
{
	private:
		std::string			_fileName;
		std::string			_fileNameRepl;
		std::string 		_toReplace;
		std::string			_toSub;
		std::string			_extension;
		std::string			_content;
		std::string			_newContent;
		std::ifstream 		_ifs;
		std::ofstream 		_ofs;

	public:
	//-------------------- Methods ------------------------------------------//
		bool			openInFile();
		bool			openOutFile();
		void			copyFileContent();
		void			replace();
		void			transferContent();
		void			closeInFile();
		void			closeOutFile();
		
	//-------------------- Set/get ------------------------------------------//
		std::ifstream 	&getIfs();
		std::string 	&getFileName();
		std::string		&getContent();
		
	//-------------------- Cons/Des -----------------------------------------//
    	TextReplace(char *fileName, char *toReplace, char *toSub, std::string extension);
    	TextReplace();
    	TextReplace(TextReplace const & src);
    	~TextReplace();
		
	//-------------------- Operators ----------------------------------------//
};

#endif

