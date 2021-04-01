// lab2_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void quadratic(int a, int b, int c)
{
	int n = b * b - 4 * a * c;

	if (n < 0)
	{
		cout << "No solvable because b^2-4ac < 0." << endl;
	}
	else
	{
		cout << "x1 = " << (-b + sqrt(n)) / (2 * a) << ", ";
		cout << "x2 = " << (-b - sqrt(n)) / (2 * a) << endl;
	}
}

int main()
{
	quadratic(3, 17, -192);
	quadratic(7, -2, 33);
	quadratic(62, 38, -243);

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
