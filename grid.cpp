
#include "grid.h"
#include <vector>
#include <string>

Grid::Grid(int rows, int cols) :
	_vec(rows, std::vector<int>(cols))
{
	// seed a RNG with current date time
}

std::string Grid::ToString()
{
	std::string output;

	for (std::vector< std::vector<int> >::iterator it_x = _vec.begin();
		it_x != _vec.end();
		++it_x)
	{
		for (std::vector<int>::iterator it_y = it_x->begin();
			it_y != it_x->end();
			++it_y)
		{
			output += *it_y + 48;
		}

		output.append("\n");
	}

	return output;
}