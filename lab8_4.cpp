// lab8_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>	
using namespace std;

int main()
{
	int base;
	string s;

	cout << "Enter the base: ";
	cin >> base;

	cout << "Enter the integer: ";
	cin >> s;

	int equ = 0; //variable for equivalent 
	int i = s.size() - 1;

	do
	{
		equ = equ + ((int) s[i] - 48) * pow(base, (s.size() - 1) - i);
		i--;
	} while (i >= 0);

	cout << equ;

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
