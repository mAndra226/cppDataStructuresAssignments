// lab12_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct node
{
	int data;
	node* left;
	node* right;
};

node* root = new node;

void showPreorder(node* node)
{
	if (node == NULL)
	{
		return;
	}
	else
	{
		cout << node->data << " "; //show data of node
		
		showPreorder(node->left); //then recur on the left subtree
		showPreorder(node->right); //recur on right subtree
	}
}

void showInOrder(node* node)
{
	if (node == NULL)
	{
		return;
	}
	else
	{
		showInOrder(node->left); //recur on left child

		cout << node->data << " "; //show data of node

		showInOrder(node->right); //recur on right child
	}
}

void showPostOrder(node* node)
{
	if (node == NULL)
	{
		return;
	}
	else
	{
		showPostOrder(node->left); // recur on left subtree
		showPostOrder(node->right); //recur on right subtree

		cout << node->data << " "; //show data of node
	}
}

int main()
{
	root->data = 1;
	root->left = NULL;
	root->right = NULL;

	node* c1 = new node;
	c1->data = 2;
	c1->left = NULL;
	c1->right = NULL;
	root->left = c1; //update pointer

	node* c2 = new node;
	c2->data = 3;
	c2->left = NULL;
	c2->right = NULL;
	root->right = c2; //update pointer

	node* c3 = new node;
	c3->data = 4;
	c3->left = NULL;
	c3->right = NULL;
	c2->left = c3; //update pointer

	node* c4 = new node;
	c4->data = 5;
	c4->left = NULL;
	c4->right = NULL;
	c3->left = c4; //update pointer

	node* c5 = new node;
	c5->data = 6;
	c5->left = NULL;
	c5->right = NULL;
	c3->left = c5; //update pointer

	cout << "Pre-order: " << endl;
	showPreorder(root);

	cout << endl;

	cout << "In-order: " << endl;
	showInOrder(root);

	cout << endl;

	cout << "Post-order" << endl;
	showPostOrder(root);

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
