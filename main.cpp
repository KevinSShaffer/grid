
#include <iostream>
#include <string>
#include "main.h"
#include "grid.h"

using namespace std;

int main()
{
	int x = getInput("Enter the number of rows: "),
		y = getInput("Enter the number of columns: ");

	Grid grid(x, y);

	cout << grid.ToString() << endl;

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