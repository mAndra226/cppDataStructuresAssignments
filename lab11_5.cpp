// lab11_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

#define MAX_SIZE 10

int arr[MAX_SIZE];

void mergeArray(int a, int b, int c, int d)
{
	int t[50];
	int i = a, j = c, k = 0;

	while (i <= b && j <= d)
	{
		if (arr[i] < arr[j])
		{
			t[k++] = arr[i++];
		}
		else
		{
			t[k++] = arr[j++];
		}
	}	//collect remaining elements
	while (i <= b)
	{
		t[k++] = arr[i++];
	}

	while (j <= d)
	{
		t[k++] = arr[j++];
	}

	for (i = a, j = 0; i <= d; i++, j++)
	{
		arr[i] = t[j];
	}
}void mergeSort(int i, int j)
{
	int m;
	if (i < j)
	{
		m = (i + j) / 2;
		mergeSort(i, m);
		mergeSort(m + 1, j);

		// Merging two arrays
		mergeArray(i, m, m + 1, j);
	}
}


int main()
{
	int i;
	
	cout << "Enter " << MAX_SIZE << " integers: ";
	for (i = 0; i < MAX_SIZE; i++)
	{
		cin >> arr[i];
	}
	
	mergeSort(0, MAX_SIZE - 1);
	
	cout << "Sorted list: ";
	for (i = 0; i < MAX_SIZE; i++)
	{
		cout << arr[i] << " ";
	}
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
