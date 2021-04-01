// lab14_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#define size 13
using namespace std;

class HashEntry
{
private:
	int key;
	int value;
public:
	HashEntry(int key, int value)
	{
		this->key = key;

		this->value = value;
	}

	int getKey()
	{
		return key;
	}

	int getValue()
	{
		return value;
	}
};

class HashMap
{
private:
	HashEntry** table;
public:
	HashMap()
	{
		table = new HashEntry * [size];

		for (int i = 0; i < size; i++)
		{
			table[i] = NULL;
		}
	}

	int get(int key)
	{
		int hash = (key % size);

		while (table[hash] != NULL && table[hash]->getKey() != key)
		{
			hash = (hash + 1) % size;
		}

		if (table[hash] == NULL)
		{
			return -1;
		}
		else
		{
			return table[hash]->getValue();
		}
	}

	void put(int key, int value)
	{
		int hash = (key % size);

		while (table[hash] != NULL && table[hash]->getKey() != key)
		{
			hash = (hash + 1) % size;
		}

		if (table[hash] != NULL)
		{
			delete table[hash];
		}

		table[hash] = new HashEntry(key, value);
	}
	
	~HashMap()
	{
		for (int i = 0; i < size; i++)
		{
			if (table[i] != NULL)
			{
				delete table[i];
				delete[] table;
			}
		}

	}
};

int main()
{
	int x[size] = { 85, 91, 66, 96, 80, 88, 95,
	                87, 84, 77, 63, 93, 82 };

	HashMap h1;

	for (int i = 0; i < size; i++)
	{
		h1.put(i, x[i]);
	}

	for (int i = 0; i < size; i++)
	{
		cout << i << ": " << h1.get(i) << endl;
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
