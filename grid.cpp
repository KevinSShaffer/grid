
#include "grid.h"
#include <vector>
#include <string>
#include <time.h>

Grid::Grid(int rows, int cols) :
	_vec(rows, std::vector<int>(cols)), _rows(rows), _columns(cols)
{
	// seed a RNG with current date time
	srand(time(0));
}
Grid::Grid(int rows, int cols, int seed) :
	_vec(rows, std::vector<int>(cols)), _rows(rows), _columns(cols)
{
	srand(seed);	
}

std::string Grid::ToString()
{
	std::string output;

	for (std::vector< std::vector<int> >::iterator it_x = _vec.begin();
		it_x != _vec.end();
		++it_x)
	{
		if (it_x != _vec.begin())
			output.append("\n");

		for (std::vector<int>::iterator it_y = it_x->begin();
			it_y != it_x->end();
			++it_y)
		{
			if (it_y != it_x->begin())
				output += " ";
			
			output += *it_y + 48;
		}
	}

	return output;
}
void Grid::Randomize()
{
	const int numCellsToChange = _rows * _columns / 3;
	int cellsChanged = 0;

	while (cellsChanged < numCellsToChange)
	{
		int randRow = rand() % _rows,
			randCol = rand() % _columns;
		int& location = _vec[randRow][randCol];

		if (location == 0)
		{
			location = 1;
			cellsChanged++;
		}
	}	
}