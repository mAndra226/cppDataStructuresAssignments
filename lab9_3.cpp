// lab9_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>
using namespace std;

double findMax(double d[], int n, double max)
{
	if (n == 0)
	{
		return max;

	}
	else //recursion case
	{
		if (d[n] > max)
		{
			max = d[n];
		}

		return (findMax(d, n - 1, max));
	}
}

double findMin(double d[], int n, double min)
{
	if (n == 0)
	{
		return min;
	}
	else
	{
		if (d[n] < min)
		{
			min = d[n];
		}

		return (findMin(d, n - 1, min));
	}
}

int main()
{
	srand((int) time(0));

	double d[15] = {};
	int size = sizeof(d) / sizeof(d[0]);

	for (int i = 0; i < size; i++) //populate 15 random number
	{
		d[i] = (double)rand() / RAND_MAX;
		cout << d[i] << " ";
	}

	cout << endl;
	cout << "Max: " << findMax(d, size-1, d[0]) << endl;
	cout << "Min: " << findMin(d, size - 1, d[0]) << endl;

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
