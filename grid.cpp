
#include "grid.h"
#include <vector>
#include <string>
#include <sstream>

Grid::Grid(int rows, int cols) :
	_vec(rows, std::vector<int>(cols))
{
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
	        std::ostringstream stm ;
	        stm << *it_y;
			output.append(stm.str());
		}

		output.append("\n");
	}

	return output;
}