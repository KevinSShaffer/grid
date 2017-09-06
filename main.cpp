
#include <iostream>
#include <string>
#include "main.h"
#include "grid.h"

using namespace std;

int main()
{
	int x = getInput("Enter the 'X' dimension: "),
		y = getInput("Enter the 'y' dimension: ");

	Grid grid(x, y);

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
}