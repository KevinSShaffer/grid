
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

	Grid grid1(x, y, time(0));
	Grid grid2(x, y, time(0) + 9999);

	cout << grid1.ToString() << endl << endl;
	cout << grid2.ToString() << endl << endl;

	grid1.Randomize();
	grid2.Randomize();

	cout << grid1.ToString() << endl << endl;
	cout << grid2.ToString() << endl << endl;

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
// add grid compare function