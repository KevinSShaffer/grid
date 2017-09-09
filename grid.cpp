
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
int Grid::getColumns() const
{
	return _columns;
}
int Grid::getRows() const
{
	return _rows;
}
int Grid::getValue(int x, int y) const
{
	return _vec[x][y];
}
void Grid::setValue(int x, int y, int value)
{
	_vec[x][y] = value;
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
Grid Grid::operator *(const Grid& grid2)
{
	if (_rows != grid2.getRows() ||
		_columns != grid2.getColumns())
		return Grid(0, 0);

	Grid grid3(_rows, _columns);

	for(int x = 0; x < _rows; x++)
	{
		for (int y = 0; y < _columns; y++)
		{
			grid3.setValue(x, y, _vec[x][y] * grid2.getValue(x, y));
		}
	}

	return grid3;
}