
#include <vector>
#include <string>

class Grid
{
private:	
	std::vector< std::vector<int> > _vec;
public:
	Grid(int rows, int cols);
	// add constructor with seed Grid(int rows, int cols, int seed);
	std::string ToString();
};