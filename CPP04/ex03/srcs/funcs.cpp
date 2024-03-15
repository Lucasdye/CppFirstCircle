#include "../incs/funcs.hpp"
#include "../../colors.hpp"

bool	idxParsing(unsigned int max, int idx)
{
	if (idx < 0)
		return ((void)(std::cout << RED <<  "index is negative" << std::endl), 
				true);
	else if (idx > max)
		return ((void)(std::cout << RED <<  "int 'idx' from unequip(int idx) can't be over value 3" << std::endl),
				 true);
	
}