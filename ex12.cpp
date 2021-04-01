/*
*  Filename: ex12.cpp
*  Programmer: Marco Andrade
*/

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

bool search(bstnode *node, int n)
{
       bool isFound = false;
       
       if(node == NULL)
       {
         return false; 
       }
       else if(n == node->data) // matched
       {
         return true;
       }
       else if(n < node->data) //search value < node
       {
         isFound = search(node->left, n);
       }
       else //search value > node
       {
         isFound = search(node->right, n);
       }
   
  return isFound;
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

        cout << "55: " << search(root, 55) << endl;
        cout << "-25:" << search(root, -25) << endl; 
        cout << "67: " << search(root, 67) << endl;
        cout << "47: " << search(root, 47) << endl;
        cout << "22: " << search(root, 22) << endl;

    return 0;
}