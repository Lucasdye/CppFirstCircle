#include "../incs/base.hpp"

std::ostream &operator<<(std::ostream &out, Fixed const &inst)
{
	out << inst.toFloat();
    return (out);
}