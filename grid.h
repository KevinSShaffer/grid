
#include <vector>
#include <string>

class Grid
{
private:	
	std::vector< std::vector<int> > _vec;
public:
	Grid(int rows, int cols);
	std::string ToString();
};