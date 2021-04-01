// lab4_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int* insert(int size, int* arr, int x)
{
	int* arr2 = new int[size + 1];
	
	for ( int i = 0; i < size; i++)
	{
		arr2[i] = arr[i];
	}

	arr2[size] = x;
	size++;

	return arr2;
}

void show(int size, int* arr)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{
	int size = 0;
	int* arr = new int[size];

	arr = insert(size, arr, 11);
	size++;
	show(size, arr);

	arr = insert(size, arr, 12);
	size++;
	show(size, arr);

	arr = insert(size, arr, 13);
	size++;
	show(size, arr);

	arr = insert(size, arr, 14);
	size++;
	show(size, arr);

	arr = insert(size, arr, 15);
	size++;
	show(size, arr);

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
