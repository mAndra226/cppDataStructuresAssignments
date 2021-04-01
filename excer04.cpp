// excer04.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
* Filename: exer04.cpp
* Programmer: Marco Andrade
*/

#include <iostream>
using namespace std;

int main()
{
	int x[3][3] = { 99, 88, 77, 
		            66, 55, 44,
		            33, 22, 11 };

	//Outputs number in array
	cout << "Before: " << endl;
	cout << x[0][0] << " ";
	cout << x[0][1] << " ";
	cout << x[0][2] << " ";
	cout << endl;

	cout << x[1][0] << " ";
	cout << x[1][1] << " ";
	cout << x[1][2] << " ";
	cout << endl;

	cout << x[2][0] << " ";
	cout << x[2][1] << " ";
	cout << x[2][2] << " ";

	cout << endl;
	cout << endl;

	//Outputs number backwards from array (in order)
	cout << "After: " << endl;
	cout << x[2][2] << " ";
	cout << x[2][1] << " ";
	cout << x[2][0] << " ";
	cout << endl;

	cout << x[1][2] << " ";
	cout << x[1][1] << " ";
	cout << x[1][0] << " ";
	cout << endl;

	cout << x[0][2] << " ";
	cout << x[0][1] << " ";
	cout << x[0][0] << " ";
	cout << endl;

	return 0; 
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
