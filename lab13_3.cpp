// lab13_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct node
{
	int data;
	node* next;
};

struct edge
{
	int start;
	int end;
};

class graph
{
public:
	int numberOfNode;

	node* addNode(int end, node* head)
	{
		node* temp = new node;
		temp->data = end;
		temp->next = head;

		return temp;
	}

public:
	node** arrNode;

	graph(edge edges[], int n, int N)
	{
		arrNode = new node * [N];

		this->numberOfNode = N;

		for (int i = 0; i < N; i++)
		{
			arrNode[i] = nullptr;
		}

		for (int i = 0; i < n; i++)
		{
			int start = edges[i].start;
			int end = edges[i].end;

			node* temp = addNode(end, arrNode[start]);

			arrNode[start] = temp;
		}
	}

	//Destructor
	~graph()
	{
		for (int i = 0; i < numberOfNode; i++)
		{
			delete[] arrNode[i];
		}

		delete[] arrNode;
	}
};

void showList(node* temp, int i)
{
	while (temp != nullptr)
	{
		cout << "(" << i << ", " << temp->data << ") ";
		temp = temp->next;
	}

	cout << endl;
}

int main()
{
	edge edges[] = { {0, 1}, {0, 3}, {1, 2}, {1, 4}, {2, 3} };
	int N = 5;

	int size = sizeof(edges) / sizeof(edges[0]);

	graph* g1 = new graph(edges, size, N);

	for (int i = 0; i < N; i++)
	{
		showList(g1->arrNode[i], i);
	}

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
