// lab6_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct node
{
	int data;
	node *next;
};

node *top = NULL;

void push(int n)
{
	node *temp = new node;
	temp->data = n;
	temp->next = top;
	top = temp;
}

void pop()
{
	if (top == NULL)
	{
		cout << "null" << endl;
	}
	else
	{
		cout << "Element popped: " << top->data << endl;
		top = top->next;
	}
}

void peek()
{
	if (top == NULL)
	{
		cout << "null" << endl;
	}
	else
	{
		cout << top->data << endl;
	}
}

void display()
{
	node *temp;
	
	if (top == NULL)
	{
		cout << "stack is empty . . . ";
	}
	else
	{
		temp = top;

		cout << "Elements are: ";

		while (temp != NULL)
		{
			cout << temp->data << " ";
			temp = temp->next;
		}
	}

	cout << endl;
}

int main()
{
	peek();

	for (int i = 0; i < 20; i++)
	{
		push(i);
	}

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
