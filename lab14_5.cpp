// lab14_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#define size 5
using namespace std;

struct Dictionary
{
	string key;
	string value;

	Dictionary* next;
};

Dictionary *head = NULL;
Dictionary *tail = NULL;

void insert(string key, string value)
{
	Dictionary *temp = new Dictionary;
	temp->key = key;
	temp->value = value;
	temp->next = NULL;

	if (head == NULL)
	{
		head = temp;
		tail = temp;
		temp = NULL;
	}
	else
	{
		tail->next = temp;
		tail = temp;
	}
}

void getValue(string k)
{
	Dictionary *temp = new Dictionary;
	temp->key = k;
	temp = head;
	
	while (temp != NULL)
	{
		if (temp->key == k)
		{
			cout << temp->value << endl;
			break;
		}
		else
		{
			temp = head->next;
		}
	}
}

int main()
{
	insert("IL", "Illinois");
	insert("CA", "California");
	insert("MI", "Michigan");
	insert("TX", "Texas");
	insert("OH", "Ohio");
	string k;

	cout << "Enter a valid key: ";
	cin >> k;

	getValue(k);

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
