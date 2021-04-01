// lab5_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct node
{
	int data;
	node* next;

	node(int d)
	{
		data = d;
		next = NULL;
	}
};

void showList(node* n)
{
	while (n != NULL)
	{
		cout << n->data << " ";
		n = n->next;
	}
}

int main()
{
    //create nodes
	node* head = new node(2);
	node* n1 = new node(5);
	node* n2 = new node(8);
	node* n3 = new node(11);
    node* tail = new node(16);

	//updates "next" variables
	head->next = n1;
	n1->next = n2;
	n2->next = n3;
	n3->next = tail;

	showList(head);
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
