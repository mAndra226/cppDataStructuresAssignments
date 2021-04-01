// excer05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
* Filename: excer05.cpp
* Programmer: Marco Andrade
*/

#include <iostream>
using namespace std;

struct node
{
	int data;
	node* prev;
	node* next;
};

node* head = NULL;
node* tail = NULL;

void addAtEnd(int n)
{
	node* temp = new node;
	temp->data = n;
	temp->prev = tail;
	temp->next = NULL;
	if (tail == NULL)
	{
		head = temp;
	}
	else
	{
		tail->next = temp;
	}
	tail = temp;
}

void addAtBegin(int n)
{
	node* temp = new node;
	temp->data = n;
	temp->prev = NULL;
	temp->next = head;
	if (head == NULL)
	{
		tail = temp;
	}
	else
	{
		head->prev = temp;
	}
	head = temp;
}

void addBeforeNode(node* t, int n)
{
	node* temp = new node;
	temp->data = n;
	temp->next = t;
	temp->prev = t->prev;
	t->prev = temp;
	if (t->prev == NULL)
	{
		head = temp;
	}
}

void addAfterNode(node* t, int n)
{
	node* temp = new node;
	temp->data = n;
	temp->prev = t;
	temp->next = t->next;
	t->next = temp;
	if (t->next == NULL)
	{
		tail = temp;
	}
}

void addAtPosition(int p, int n)
{
	node* prev = new node;
	node* cur = new node;
	node* temp = new node;
	cur = head;
	for (int i = 0; i < p; i++)
	{
		prev = cur;
		cur = cur->next;
	}
	temp->data = n;
	prev->next = temp;
	temp->next = cur;
}

void showList(node* head)
{
	while (head != NULL)
	{
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}

void deleteAtPosition(int p)
{
	node* cur = new node;
	node* prev = new node;
	cur = head;
	for (int i = 1; i < p; i++)
	{
		prev = cur;
		cur = cur->next;
	}
	prev->next = cur->next;
}
//
void deleteAllNode()
{
	node* temp = head->next;
	while (temp != NULL)
	{
		head->next = temp->next;
		temp->next = NULL;
		delete temp;
		temp = head->next;
	}
	head = NULL;

	cout << "Empty list now.";
}

int main()
{
	for (int i = 0; i < 20; i++)
	{
		addAtEnd(i + 10);
	}
	showList(head);

	addAtBegin(9);
	showList(head);

	addAtEnd(37);
	showList(head);

	addAtPosition(7, 81);
	showList(head);

	deleteAtPosition(11);
	showList(head);

	deleteAllNode();
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
