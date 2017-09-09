/********************************************************************
*  Name        :  Kevin Shaffer
*  Student ID  :  106069743
*  Class       :  CSCI 2312-001        
*  HW#         :  2     
*  Due Date    :  Sep 12th, 2013
*  Description :  Creates two grids, randomizes them both, and then
				  multiplies them.
********************************************************************/

#include <iostream>
#include <string>
#include <time.h>
#include "main.h"
#include "grid.h"

using namespace std;

int main()
{
	int x = getInput("Enter the number of rows: "),
		y = getInput("Enter the number of columns: ");

	// create two grids with different time based seeds
	Grid grid1(x, y, time(0));
	Grid grid2(x, y, time(0) + 9999);

	cout << "Grid1 created" << endl;
	cout << grid1.ToString() << endl << endl;
	cout << "Grid2 created" << endl;
	cout << grid2.ToString() << endl << endl;

	grid1.Randomize();
	grid2.Randomize();

	cout << "Grid1 has been randomized" << endl;
	cout << grid1.ToString() << endl << endl;
	cout << "Grid2 had been randomized" << endl;
	cout << grid2.ToString() << endl << endl;

	Grid grid3 = grid1 * grid2;

	cout << "Grid1 * Grid2 = " <<  endl;
	cout << grid3.ToString() << endl << endl;

	cout << "Press a key to exit: ";
	cin >> x;

	return 0;
}
int getInput(string question)
{
	int value = 0;

	// loop until user provides valid integer input 
	while (!value)
	{
		cout << question << endl;
		cin >> value;
		cin.clear();
		cin.ignore(256,'\n');
	}

	return value;
}