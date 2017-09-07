
#include "grid.h"
#include <vector>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

Grid::Grid(int rows, int cols) :
	_vec(rows, std::vector<int>(cols))
{
	// seed a RNG with current date time
	srand(time(0));
}
Grid::Grid(int rows, int cols, int seed) :
	_vec(rows, std::vector<int>(cols))
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
			output += *it_y + 48;
		}
	}

	return output;
}
void Grid::Randomize()
{
	/*  CHANGE THIS  */
	// This needs to assign 1/3 of the elements
	for (std::vector< std::vector<int> >::iterator it_x = _vec.begin();
		it_x != _vec.end();
		++it_x)
	{
		for (std::vector<int>::iterator it_y = it_x->begin();
			it_y != it_x->end();
			++it_y)
		{
			if (rand() % 3 == 0)
				*it_y = 1;
			else
				*it_y = 0;
		}
	}	
}