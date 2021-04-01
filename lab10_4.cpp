// lab10_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

void jumpSearch(int x[], int size, int n)
{
	int start = 0;
	int end = sqrt(size); //the square root of array length

	while (x[end] <= n && end < size)
	{
		start = end; //if it is not correct, block then shift block
		end += sqrt(size);

		if (end > size - 1)
		{
			end = size; //if right exceeds then bound the range
		}
	}

	bool isFound = false;

	for (int i = start; i < end; i++) // perform linear search in selected block
	{
		if (x[i] == n)
		{
			cout << n << " is found at index: " << i << endl;

			isFound = true;
		}
	}

	if (isFound == false)
	{
		cout << n << " is not found." << endl;
	}
}

int main()
{
	int x[] = { 12, 29, 34, 57, 65, 72, 83, 98, 104, 117 };
	int size = sizeof(x) / sizeof(x[0]);

	jumpSearch(x, size, 83);
	jumpSearch(x, size, 84);

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
