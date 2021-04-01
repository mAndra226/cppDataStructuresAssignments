// lab7_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

void push(int n)
{
	node* temp = new node;
	temp->data = n;
	temp->next = NULL;

	if (head == NULL) //means no node exists
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

void pop()
{
	node* temp = new node;
	temp = head;

	if (head == NULL)
	{
		cout << "Queue underflow" << endl;
	}
	else
	{
		cout << "Element popped: " << head->data << endl;

		temp = temp->next;
		head = temp;
	}
}

void peek()
{
	if (head == NULL)
	{
		cout << "Queue underflow" << endl;
	}
	else
	{
		cout << head->data << endl;
	}
}

bool IsEmpty()
{
	if (head == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void display()
{
	node* temp;
	temp = head;

	if ((head == NULL) && (tail == NULL))
	{
		cout << "Empty queue." << endl;
	}
	
	cout << "Queue elements are: ";
	
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	
	cout << endl;
}

int main()
{
	push(3);
	push(5);
	push(9);
	push(1);
	push(12);
	push(15);
	push(18);
	push(21);
	push(22);
	push(24);

	display();
	pop();
	display();
	pop();
	display();
	peek();

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
