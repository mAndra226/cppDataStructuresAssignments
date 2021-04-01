// lab10_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

bool binarySearch(int x[], int n, int size)
{
	bool isFound = false;

	int low = 0;
	int high = size - 1;
	int middle = 0;

	while (high >= low)
	{
		middle = (low + high) / 2;

		if (x[middle] == n)
		{
			isFound = true;
			break;
		}
		else if (x[middle] < n)
		{
			low = middle + 1;
		}
		else if (x[middle] > n)
		{
			high = middle - 1;
		}
	}

	return isFound;
}

int main()
{
	int x[] = { 6, 8, 9, 10, 11, 14, 15, 17, 18, 21, 23, 27 };
	int size = (sizeof(x) / sizeof(x[0]));

	cout << "14: " << binarySearch(x, 14, size) << endl;
	cout << "20: " << binarySearch(x, 20, size) << endl;

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
