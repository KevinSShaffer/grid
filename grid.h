#ifndef GRID_H
#define GRID_H

#include <vector>
#include <string>

class Grid
{
private:	
	std::vector< std::vector<int> > _vec;
	int _rows, _columns;
public:
	Grid(int rows, int cols);
	Grid(int rows, int cols, int seed);
	Grid::Grid(vector< std::vector<int> > vec);
	int getColumns() const;
	int getRows() const;
	int getValue(int x, int y) const;
	void setValue(int x, int y, int value);
	void Randomize();
	std::string ToString();
	Grid operator *(const Grid& grid2) const;
	std::vector<int> Grid::operator [](const int row) const;
};

#endif