// lab13_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct node
{
	int data;
	int cost;
	node* next;
};
struct graph
{
	int start;
	int end;
	int weight;
};class Diagraph
{
public:
	int numberOfNode;
	node* addNode(int end, int weight, node* head)
	{
		node* temp = new node;
		temp->data = end;
		temp->cost = weight;

		temp->next = head;

		return temp;
	}
public:
	node** arrNode;
	//n: numberOfEdge, N: numberOfNode
	Diagraph(graph edges[], int n, int N) //constructor
	{
		arrNode = new node * [N];

		this->numberOfNode = N;

		for (int i = 0; i < N; ++i) //create pointer for al vertices
		{
			arrNode[i] = nullptr;
		}
		for (int i = 0; i < n; i++) //add edges to build directed graph
		{
			int start = edges[i].start;
			int end = edges[i].end;
			int weight = edges[i].weight;

			node* temp = addNode(end, weight, arrNode[start]);
			arrNode[start] = temp;
		}
	}

	~Diagraph()
	{
		for (int i = 0; i < numberOfNode; i++)
		{
			delete[] arrNode[i];
		}

		delete[] arrNode;
	}
};

void showAdjacentNode(node* temp, int i)
{
	while (temp != nullptr)
	{
		cout << "(" << i << ", " << temp->data << ", " << temp->cost << ") ";
		temp = temp->next;
	}
	cout << endl;
}

int main()
{
	graph edges[] = { {0, 1, 2}, {0, 2, 4}, {1, 4, 3},
                      {2, 3, 2}, {3, 1, 4}, {4, 3, 3} };

	int numberOfNode = 6;
	int numberOfEdge = sizeof(edges) / sizeof(edges[0]);

	Diagraph* d1 = new Diagraph(edges, numberOfEdge, numberOfNode);

	cout << "Adjacent node in (start, end, weight) format:" << endl;

	for (int i = 0; i < numberOfNode; i++)
	{
		showAdjacentNode(d1->arrNode[i], i);
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
