/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TextReplace.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/03/20 14:12:35 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/14 12:24:24 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/base.hpp"

//-------------------- Methods ----------------------------------------------//
bool			TextReplace::openInFile()
{
	_ifs.open(_fileName.c_str(), std::ifstream::in);
	if (_ifs.fail())
	{
		std::cout << RED << "Something went wrong. " << "The file " << "\"" <<_fileName
		<< "\"" << " couldn't be opened." << END_C << std::endl;
		return (true);
	}
	return (false);
}

void			TextReplace::replace()
{
	size_t	pos;
	
	pos = 0;
	_newContent.resize(_content.length());
	_newContent = _content;
	std::cout << "TEST" << "5.1" << std::endl;
	 while (pos < _newContent.length())
    {
		pos = _newContent.find(_toReplace, pos);
		if (pos != std::string::npos)
	   	{	
			_newContent.erase(pos, _toReplace.length());
       		_newContent.insert(pos, _toSub);
       		pos += _toSub.length();
		}
    }
}

bool			TextReplace::openOutFile()
{
	_ofs.open(_fileNameRepl.c_str(), std::ofstream::out);
	if (_ofs.fail())
	{
		std::cout << RED << "Something went wrong. " << "The file " << "\"" <<_fileName
		<< "\"" << " couldn't be opened." << END_C << std::endl;
		return (true);
	}
	return (false);
}

void			TextReplace::copyFileContent()
{
	std::getline(_ifs, _content, '\0');
	return ;
}

void			TextReplace::transferContent()
{
	_ofs << _newContent;
}

void			TextReplace::closeInFile()
{
	_ifs.close();
	return;
}

void			TextReplace::closeOutFile()
{
	_ofs.close();
	return;
}

//-------------------- Set/Get ----------------------------------------------//
std::ifstream 	&TextReplace::getIfs()
{
	return (_ifs);
}

std::string 	&TextReplace::getFileName()
{
	return (_fileName);
}

std::string		&TextReplace::getContent()
{
	return(_content);
}

//-------------------- Constructor/Destructor -------------------------------//
TextReplace::TextReplace(char *fileName, char *toReplace, char *toSub, std::string extension):
_fileName(fileName), _toReplace(toReplace), _toSub(toSub), _extension(extension)
{
	std::cout << "Personalised constructor called for TextReplace" << std::endl;
	_fileNameRepl = fileName;
	_fileNameRepl += extension;
	return ;
}

TextReplace::TextReplace(): _fileName(), _toReplace(""), _toSub("")
{
	std::cout << "Default constructor called for TextReplace" << std::endl;
	return ;
}

TextReplace::~TextReplace()
{
	std::cout << "Destructor called for TextReplace" << std::endl;
	return ;
}
//-------------------- Operators --------------------------------------------//






