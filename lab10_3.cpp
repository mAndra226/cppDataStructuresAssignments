// lab10_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct node 
{
	int data;
	node* next;
};

node* head = NULL;
node* tail = NULL;

void addNode(int n)
{
	node* temp = new node;
	temp->data = n;
	temp->next = NULL;

	if (head == NULL)
	{
		head = temp;
		tail = temp;
	}
	else
	{
		tail->next = temp;
		tail = tail->next;
	}
}

void showList()
{
	node* temp = head; 

	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}

	cout << endl;
}

bool linearSearch(int n)
{
	bool isFound = false;

	node* temp = head;

	while (temp != NULL)
	{
		if (temp->data == n)
		{
			isFound = true;
			break;
		}

		temp = temp->next;
	}

	return isFound;
}


int main()
{
	addNode(12);
	addNode(5);
	addNode(18);
	addNode(7);
	addNode(10);
	addNode(11);
	addNode(9);
	addNode(16);
	addNode(14);

	showList();

	cout << linearSearch(11) << endl;
	cout << linearSearch(21) << endl;
    
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
