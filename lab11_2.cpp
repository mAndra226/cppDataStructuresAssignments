// lab11_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void bubbleSort(int x[], int size)
{
	bool swapped = true;
	int j = 0;
	int temp;

	while (swapped)
	{
		swapped = false;
		j++;

		for (int i = 0; i < size-j; i++)
		{
			if (x[i] > x[i + 1])
			{
				temp = x[i];
				x[i] = x[i + 1];
				x[i + 1] = temp;
				swapped = true;
			}
		}
	}
}

void show(int x[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << x[i] << " ";
	}
}

int main()
{
	int x[] = { 24, 17, 20, -19, 52, 73, -6, 41, 37, 55, 39, -21, 68, 27 };
	int size = sizeof(x) / sizeof(x[0]);

	bubbleSort(x, size);
	show(x, size);

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
