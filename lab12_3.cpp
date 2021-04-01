// lab12_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct bstnode
{
	int data;
	bstnode* left;
	bstnode* right;
};

bstnode* insert(bstnode* node, int n) //insert new
{
	if (node == NULL) //tree is empty
	{
		bstnode* temp = new bstnode();
		temp->data = n;
		temp->left = NULL;
		temp->right = NULL;

		return temp;
	}
	else //find the proper place to insert new node
	{
		if (n < node->data)
		{
			node->left = insert(node->left, n);
		}
		else
		{
			node->right = insert(node->right, n);
		}

		return node; // return the node pointer
	}
}

void showPreOrder(bstnode* node) //preorder traversal
{
	if (node != NULL)
	{
		cout << node->data << " ";
		showPreOrder(node->left);
		showPreOrder(node->right);
	}
}

void showInOrder(bstnode *node)
{
	if (node != NULL)
	{
		showInOrder(node->left);
		cout << node->data << " ";
		showInOrder(node->right);
	}
}

void showPostOrder(bstnode* node) //postorder traversal
{
	if (node != NULL)
	{
		showPostOrder(node->left);
		showPostOrder(node->right);
		cout << node->data << " ";
	}
}

bstnode* findMin(bstnode* node) //find node with minimum value
{
	bstnode* temp = node;

	//search the leftmost tree
	while (temp && temp->left != NULL)
	{
		temp = temp->left;
	}

	return temp;
}

bstnode* findMax(bstnode* node) //find node with maximum value
{
	bstnode* temp = node;

	//search the rightmost tree
	while (temp && temp->right != NULL)
	{
		temp = temp->right;
	}

	return temp;
}

int main()
{
	bstnode* root = NULL;
	root = insert(root, 46);
	root = insert(root, -25);
	root = insert(root, 31);
	root = insert(root, -64);
	root = insert(root, 55);
	root = insert(root, 83);
	root = insert(root, 67);

	bstnode* min = findMin(root);
	cout << min->data << endl;

	bstnode* max = findMax(root);
	cout << max->data << endl;

	showInOrder(root);
	cout << endl;

	showPreOrder(root);
	cout << endl;

	showPostOrder(root);
	cout << endl;

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
