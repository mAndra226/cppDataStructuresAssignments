// lab11_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void insertionsort(int x[], int size)
{
	int j, temp;
	if (size > 0)
	{
		insertionsort(x, size - 1);

		temp = x[size - 1]; // temporary place
		j = size - 2; // identify the place before size-1
		while (j >= 0 && temp < x[j]) //swap only when temp < x[j]
		{
			x[j + 1] = x[j]; //slide bigger numbers over
			j--;
		}
		x[j + 1] = temp; //insert new number in empty space
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
	int x[] = { 16, 12, -10, 17, 11, 27, 14, -15, 20, 19, 15, 35, 13, 18 };
	int size = sizeof(x) / sizeof(x[0]);

	insertionsort(x, size);
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
