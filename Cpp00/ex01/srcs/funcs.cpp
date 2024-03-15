#include "../incs/funcs.hpp"

void draw_spaces(int nb)
{
	if (nb < 0)
		return ;
	for (int i = 0; i < nb; i++)
		std::cout << " ";
	return ;
}

bool is_numeric(std::string str)
{
	for (size_t i = 0; i < (size_t)str.size(); i++)
	{
		if (std::isdigit(str[i]) == false)
			return (false);
	}
	return (true);
}