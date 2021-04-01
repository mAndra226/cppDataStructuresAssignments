// ex14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
*  Filename: ex14.cpp
*  Programmer: Marco Andrade
*/

#include <iostream>
#define size 7 //array size
using namespace std;

struct node
{
	int v;
	int k;
	node* next;
};
class Hash
{
public:
	node** hashtable;

	Hash()
	{
		hashtable = new node * [size]; //create an empty hashtable

		for (int i = 0; i < size; i++)
		{
			hashtable[i] = NULL;
		}
	}

	~Hash()
	{
		delete[] hashtable;
	}

	int HashFunction(int value)
	{
		return value % size;
	}

	void insert(int value)
	{
		int key = HashFunction(value);
		node* temp = hashtable[key];

		if (temp == NULL)
		{
			temp = new node;
			temp->v = value;
			temp->k = key;
			temp->next = NULL;
			hashtable[key] = temp;
		}
		else //if values exist
		{
			while (temp != NULL) //iterate till the end of list
			{
				temp = temp->next;
			}

			//create the new node at end of list
			temp = new node;
			temp->v = value;
			temp->k = key;
			temp->next = NULL;
		}

		cout << key << "\t" << value << endl; //output values and keys
	}
};

int main()
{
	int x[size] = { 42, 23, 34, 57, 46, 38, 12 };

	Hash* h1 = new Hash();

	cout << "key\tvalue" << endl; //title of output 

	for (int i = 0; i < size; i++)
	{
		h1->insert(x[i]);
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
