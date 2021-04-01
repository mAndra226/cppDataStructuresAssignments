// lab14_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

#define size 13

class HashTable
{
public:
	int k;
	int v;

	HashTable(int k, int v)
	{
		this->k = k;
		this->v = v;
	}
};

class Hash
{
private:
	HashTable** hashtable;
public:
	Hash()
	{
		hashtable = new HashTable * [size];
		for (int i = 0; i < size; i++)
		{
			hashtable[i] = NULL;
		}
	}

	int HashFunction(int v)
	{
		return v % size;
	}

	void Insert(int v)
	{
		int k = HashFunction(v);
		int h = HashFunction(k);

		while (hashtable[h] != NULL && hashtable[h]->k != k)
		{
			h = HashFunction(h + 1);
		}

		if (hashtable[h] != NULL)
		{
			delete hashtable[h];
		}

		hashtable[h] = new HashTable(k, v);
	}
	void SearchKey(int k)
	{
		int h = HashFunction(k);

		while (hashtable[h] != NULL && hashtable[h]->k != k)
		{
			h = HashFunction(h + 1);
		}

		if (hashtable[h] == NULL)
		{
			cout << "No element found at key: " << k << endl;
		}
		else
		{
			cout << "Element at key " << k << ": " << hashtable[h]->v << endl;
		}
	}
	void RemoveKey(int k)
	{
		int h = HashFunction(k);

		while (hashtable[h] != NULL)
		{
			if (hashtable[h]->k == k)
			{
				break;
			}

			h = HashFunction(h + 1);
		}

		if (hashtable[h] == NULL)
		{
			cout << "Key " << k << " not found." << k << endl;
		}
		else
		{
			hashtable[h] = NULL;

			cout << "Key " << k << " deleted." << endl;
		}
	}	~Hash()
	{
		for (int i = 0; i < size; i++)
		{
			if (hashtable[i] != NULL)
			{
				delete hashtable[i];
				delete[] hashtable;
			}
		}
	}
};

int main()
{
	int x[size] = { 85, 91, 66, 96, 80, 88, 95,
                    87, 84, 77, 63, 93, 82 };

	Hash* h1 = new Hash();

	for (int i = 0; i < size; i++)
	{
		h1->Insert(x[i]);
	}

	h1->RemoveKey(0);
	h1->SearchKey(1);
	h1->SearchKey(2);
	h1->SearchKey(5);
	h1->SearchKey(6);
	h1->SearchKey(0);
	h1->SearchKey(4);

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
