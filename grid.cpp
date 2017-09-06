
#include "grid.h"
#include <vector>

Grid::Grid(int x, int y) : 
	_vec(x, std::vector<int>(y, 0))
{
}