/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2004/03/20 14:37:38 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/25 15:44:47 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/base.hpp"

Brain::Brain()
{
	std::cout << "Default constructor called for Brain" << std::endl;
	_ideas[0] = "creativity";
	_ideas[1] = "imagination";
	_ideas[2] = "innovation";
	_ideas[3] = "dream";
	_ideas[4] = "adventure";
	_ideas[5] = "mystery";
	_ideas[6] = "exploration";
	_ideas[7] = "discovery";
	_ideas[8] = "science";
	_ideas[9] = "art";
	_ideas[10] = "culture";
	_ideas[11] = "history";
	_ideas[12] = "tradition";
	_ideas[13] = "future";
	_ideas[14] = "progress";
	_ideas[15] = "technology";
	_ideas[16] = "space";
	_ideas[17] = "universe";
	_ideas[18] = "galaxy";
	_ideas[19] = "star";
	_ideas[20] = "planet";
	_ideas[21] = "nature";
	_ideas[22] = "forest";
	_ideas[23] = "ocean";
	_ideas[24] = "mountain";
	_ideas[25] = "river";
	_ideas[26] = "desert";
	_ideas[27] = "wildlife";
	_ideas[28] = "flora";
	_ideas[29] = "humanity";
	_ideas[30] = "society";
	_ideas[31] = "community";
	_ideas[32] = "family";
	_ideas[33] = "friendship";
	_ideas[34] = "love";
	_ideas[35] = "peace";
	_ideas[36] = "war";
	_ideas[37] = "conflict";
	_ideas[38] = "resolution";
	_ideas[39] = "growth";
	_ideas[40] = "development";
	_ideas[41] = "sustainability";
	_ideas[42] = "ecology";
	_ideas[43] = "environment";
	_ideas[44] = "climate change";
	_ideas[45] = "renewable energy";
	_ideas[46] = "pollution";
	_ideas[47] = "conservation";
	_ideas[48] = "biodiversity";
	_ideas[49] = "extinction";
	_ideas[50] = "species";
	_ideas[51] = "rare";
	_ideas[52] = "precious";
	_ideas[53] = "treasure";
	_ideas[54] = "legend";
	_ideas[55] = "myth";
	_ideas[56] = "folklore";
	_ideas[57] = "magic";
	_ideas[58] = "sorcery";
	_ideas[59] = "fantastic";
	_ideas[60] = "science fiction";
	_ideas[61] = "cyberpunk";
	_ideas[62] = "utopia";
	_ideas[63] = "dystopia";
	_ideas[64] = "revolution";
	_ideas[65] = "ideal";
	_ideas[66] = "philosophy";
	_ideas[67] = "thought";
	_ideas[68] = "critique";
	_ideas[69] = "question";
	_ideas[70] = "research";
	_ideas[71] = "answer";
	_ideas[72] = "problem";
	_ideas[73] = "solution";
	_ideas[74] = "complexity";
	_ideas[75] = "simplicity";
	_ideas[76] = "clarity";
	_ideas[77] = "darkness";
	_ideas[78] = "light";
	_ideas[79] = "color";
	_ideas[80] = "sound";
	_ideas[81] = "music";
	_ideas[82] = "dance";
	_ideas[83] = "theatre";
	_ideas[84] = "cinema";
	_ideas[85] = "literature";
	_ideas[86] = "poetry";
	_ideas[87] = "writing";
	_ideas[88] = "reading";
	_ideas[89] = "learning";
	_ideas[90] = "teaching";
	_ideas[91] = "intelligence";
	_ideas[92] = "wisdom";
	_ideas[93] = "knowledge";
	_ideas[94] = "skills";
	_ideas[95] = "talent";
	_ideas[96] = "ability";
	_ideas[97] = "motivation";
	_ideas[98] = "ambition";
	_ideas[99] = "success";
	return ;
}

Brain::Brain(Brain const &src)
{
	std::cout << "Copy constructor called for Brain" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = src._ideas[i];
	return ;
}

std::string	Brain::getIdea(size_t idx)
{
	return (_ideas[idx]);
}

std::string	*Brain::getIdeas()
{
	return (_ideas);
}

void		Brain::setMainIdea(std::string main_idea)
{
	_mainIdea = main_idea;
	return ;
}

std::string&	Brain::getMainIdea()
{
	return (_mainIdea);
}

Brain&	Brain::operator=(Brain const &instance)
{
	std::cout << "Assignment operator called for Brain" << std::endl;
	if (this != &instance)
	{
		for (int i = 0; i < 100; i++)
			_ideas[i] = instance._ideas[i];
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Destructor called for Brain" << std::endl;
	return ;
}


