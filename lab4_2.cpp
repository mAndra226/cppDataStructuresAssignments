// lab4_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int x[3][5] = {};
	
	//populate row 1
	x[0][0] = 11;
	x[0][1] = 12;
	x[0][2] = 13;
	x[0][3] = 14;
	x[0][4] = 15;

	//populate row 2
	x[1][0] = 16;
	x[1][1] = 17;
	x[1][2] = 18;
	x[1][3] = 19;
	x[1][4] = 20;

	//populate row 3
	x[2][0] = 21;
	x[2][1] = 22;
	x[2][2] = 23;
	x[2][3] = 24;
	x[2][4] = 25;

	//retrieve values row by row
	cout << x[0][0] << endl;
	cout << x[0][1] << endl;
	cout << x[0][2] << endl;
	cout << x[0][3] << endl;
	cout << x[0][4] << endl;

	cout << x[1][0] << endl;
	cout << x[1][1] << endl;
	cout << x[1][2] << endl;
	cout << x[1][3] << endl;
	cout << x[1][4] << endl;

	cout << x[2][0] << endl;
	cout << x[2][1] << endl;
	cout << x[2][2] << endl;
	cout << x[2][3] << endl;
	cout << x[2][4] << endl;
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
