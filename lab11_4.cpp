// lab11_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>
using namespace std;

int* selectionSort(int x[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int index = i;
		for (int j = i + 1; j < size; j++)
		{
			if (x[j] < x[index])
			{
				index = j;
			}
		}

		int temp = x[index];
		x[index] = x[i];
		x[i] = temp;
	}
	return x;
}

int main()
{
	int size = 25;
	int* x = new int[25];
	
	srand(time(0)); // Initialize random number generator
	
	cout << "Original: " << endl;
	for (int i = 0; i < size - 1; i++) // populate the elements
	{
		x[i] = (rand() % 1000) + 1;

		cout << x[i] << " ";
	}
	
	int* y = selectionSort(x, size); // sorting
	cout << "\n\nSorted:" << endl;
	
	for (int i = 0; i < size - 1; i++)
	{
		cout << y[i] << " ";
	}	return 0;
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
