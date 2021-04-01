// lab5_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

void showList(node * n)
{
	while (n != NULL)
	{
		cout << n->data << " ";
		n = n->next;
	}
	cout << endl;
}

void deleteAtBegin()
{
	node *temp = new node;
	temp = head;
	head = head->next;
	delete temp;
}

void deleteAtEnd()
{
	node *prev = new node;
	node *temp = new node;

	temp = head;

	while (temp->next != NULL)
	{
		prev = temp;
		temp = temp->next;
	}

	tail = prev;
	prev->next = NULL;
	delete temp;
}

void deleteAtPosition(int p)
{
	node *temp = new node;
	node *prev = new node;
	temp = head;

	for (int i = 1; i < p; i++)
	{
		prev = temp;
		temp = temp->next;
	}

	prev->next = temp->next;
}

void deleteAllNode()
{
	node *temp = head->next;

	while (temp != NULL)
	{
		head->next = temp->next;
		temp->next = NULL;
		delete temp;
		temp = head->next;
	}

	head = NULL;

	cout << "empty list now.";
}

int main()
{
	head = NULL;
	tail = NULL;

	cout << "Insert elements: " << endl;
	addAtEnd(2);
	addAtEnd(5);
	addAtEnd(8);
	addAtEnd(11);
	addAtEnd(16);

	showList(head);

	deleteAtPosition(3);

	showList(head);

	deleteAtBegin();
	showList(head);

	deleteAtEnd();
	showList(head);

	deleteAllNode();
	showList(head); //show nothing
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
