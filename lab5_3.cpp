// lab5_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct node
{
	int data;
	node* next;
};

node* head = new node();
node* tail = new node();

void addAtBegin(int n)
{
	node* temp = new node();
	temp->data = n;
	temp->next = head;
	head = temp;
}

void addAtEnd(int n)
{
	node *temp = new node;
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

void insertByPosition(int pos, int value)
{
	node *pre = new node;
	node *cur = new node;
	node *temp = new node;

	cur = head;

	for (int i = 1; i < pos; i++)
	{
		pre = cur;
		cur = cur->next;
	}

	temp->data = value;
	pre->next = temp;
	temp->next = cur;
}

void showList(node * n)
{
	while (n != NULL)
	{
		cout << n->data << " ";
		n = n->next;
	}
}

bool isEmpty(node *n)
{
	if (!n) { return true; }
	else { return false;  }
}

int main()
{
	head = NULL;
	tail = NULL;

	cout << isEmpty(head) << endl;

	cout << "Insert elements: " << endl;
	addAtEnd(2);
	addAtEnd(5);
	addAtEnd(8);
	addAtEnd(11);
	addAtEnd(16);
	showList(head);

	cout << isEmpty(head) << endl;

	cout << "\nInsert at begin: " << endl;
	addAtBegin(7);
	showList(head);

	cout << "\nInsertion as position 5: " << endl;
	insertByPosition(5, 9);
	showList(head);
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
