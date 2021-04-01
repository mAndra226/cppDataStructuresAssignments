// lab13_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Graph
{
private: 
	bool** edges;
	int N; //number of nodes

public:
	Graph(int N)
	{
		this->N = N;
		
		edges = new bool* [N];

		for (int i = 0; i < N; i++)
		{
			edges[i] = new bool[N];

			for (int j = 0; j < N; j++)
			{
				edges[i][j] = false;
			}
		}
	}

	void addEdge(int i, int j)
	{
		if (i >= 0 && i < N && j > 0 && j < N)
		{
			edges[i][j] = true;
			edges[j][i] = true;
		}
	}

	void removeEdge(int i, int j)
	{
		if (i >= 0 && i < N && j > 0 && j < N)
		{
			edges[i][j] = false;
			edges[j][i] = false;
		}
	}

	bool isEdge(int i, int j)
	{
		if (i >= 0 && i < N && j > 0 && j < N)
		{
			return edges[i][j];
		}
		else
		{
			return false;
		}
	}

	void showMatrix()
	{
		cout << "Matrix: " << endl;

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				cout << edges[i][j] << " ";
			}

			cout << endl;
		}
	}

	~Graph()
	{
		for (int i = 0; i < N; i++)
		{
			delete[] edges[i];
		}
		delete[] edges;
	}
};

int main()
{
	Graph* g1 = new Graph(5);

	g1->addEdge(0, 1);
	g1->addEdge(0, 4);
	g1->addEdge(1, 3);
	g1->addEdge(2, 3);
	g1->addEdge(2, 4);
	g1->addEdge(3, 2);
	g1->addEdge(3, 4);

	cout << g1->isEdge(0, 1) << endl;
	cout << g1->isEdge(1, 4) << endl;

	g1->showMatrix();

	g1->removeEdge(1, 3);
	g1->showMatrix();

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
