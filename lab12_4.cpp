// lab12_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
using namespace std;

struct bstnode
{
	int data;
	bstnode* left;
	bstnode* right;
};

bstnode* insert(bstnode* node, int n) // insert a new
{
	if (node == NULL)//tree is empty
	{
		bstnode* temp = new bstnode();
		temp->data = n;
		temp->left = NULL;
		temp->right = NULL;
		return temp; //return a new node
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
		return node; //return the node pointer
	}
}

void showPreorder(bstnode* node) //Preorder traversal
{
	if (node != NULL)
	{
		cout << node->data << " ";
		showPreorder(node->left);
		showPreorder(node->right);
	}
}

void showInorder(bstnode* node) //Inorder traversal
{
	if (node != NULL)
	{
		showInorder(node->left);
		cout << node->data << " ";
		showInorder(node->right);
	}
}

void showPostorder(bstnode* node) //Postorder traversal
{
	if (node != NULL)
	{
		showPostorder(node->left);
		showPostorder(node->right);
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

bstnode* findMax(bstnode* node) //find node with minimum value
{
	bstnode* temp = node;

	//search the leftmost tree
	while (temp && temp->right != NULL)
	{
		temp = temp->right;
	}

	return temp;
}

bstnode* deleteNode(bstnode* root, int n)
{
	if (root == NULL) // empty tree
	{
		return root;
	}
	if (n < root->data) // n < root, go for left-most tree
	{
		root->left = deleteNode(root->left, n);
	}
	else if (n > root->data) // n > root, go for right-most tree
	{
		root->right = deleteNode(root->right, n);
	}

	else // n is same as root
	{
		if (root->left == NULL) //node with only one child or no child
		{
			bstnode* temp = root->right;
			free(root);
			return temp;
		}
		else if (root->right == NULL)
		{
			bstnode* temp = root->left;
			free(root);
			return temp;
		}

		// node with both children
		//get successor and then delete the node
		bstnode* temp = findMin(root->right);

		// Copy the showInorder successor's content to this node
		root->data = temp->data;

		// Delete the showInorder successor
		root->right = deleteNode(root->right, temp->data);
	}
	return root;
}

int main() //main program
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
	
	showInorder(root);
	cout << endl;

	showPreorder(root);
	cout << endl;

	showPostorder(root);
	cout << endl;

	root = deleteNode(root, 46); //Delete node 46

	showInorder(root);
	cout << endl;

	showPreorder(root);
	cout << endl;

	showPostorder(root);
	cout << endl;

	return 0;}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
