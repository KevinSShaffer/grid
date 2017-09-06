
#include <vector>
#include <string>

class Grid
{
private:	
	std::vector< std::vector<int> > _vec;
public:
	Grid(int rows, int cols);
	Grid(int rows, int cols, int seed);
	std::string ToString();
	void Randomize();
};