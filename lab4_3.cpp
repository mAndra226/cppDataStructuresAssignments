// lab4_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	double sales[2][4][3] = { };

	sales[0][0][0] = 50.1;
	sales[0][0][1] = 57.5;
	sales[0][0][2] = 65.4;

	//column 1
	sales[0][1][0] = 52.5;
	sales[0][1][1] = 55.4;
	sales[0][1][2] = 67.9;

	//column 2
	sales[0][2][0] = 55.6;
	sales[0][2][1] = 52.9;
	sales[0][2][2] = 60.2;

	//column 3
	sales[0][3][0] = 56.7;
	sales[0][3][1] = 66.2;
	sales[0][3][2] = 70.1;

	//row 1 column 0
	sales[1][0][0] = 51.2;
	sales[1][0][1] = 54.3;
	sales[1][0][2] = 62.7;

	//row 1 column 1
	sales[1][1][0] = 54.8;
	sales[1][1][1] = 55.1;
	sales[1][1][2] = 65.3;

	//row 1 column 2
	sales[1][2][0] = 52.3;
	sales[1][2][1] = 54.8;
	sales[1][2][2] = 60.6;

	//row 1 column 3
	sales[1][3][0] = 60.7;
	sales[1][3][1] = 67.4;
	sales[1][3][2] = 72.5;

	int rsize = sizeof(sales) / sizeof(sales[0]);
	int csize = sizeof(sales[0]) / sizeof(sales[0][0]);
	int lsize = sizeof(sales[0][0]) / sizeof(sales[0][0][0]);

	cout << "r: " << rsize << endl;
	cout << "c: " << csize << endl;
	cout << "l: " << lsize << endl;

	for (int r = 0; r < rsize; r++)
	{
		for (int c = 0; c < csize; c++)
		{
			for (int l = 0; l < lsize; l++)
			{
				cout << sales[r][c][l] << endl;
			}
		}
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
