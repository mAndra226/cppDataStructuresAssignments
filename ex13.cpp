/*
*  Filename: ex13.cpp
*  Programmer: Marco Andrade
*/

#include <iostream>
using namespace std;

const int N = 5; //variable with a fixed size
char node[N] = { 'A', 'B', 'C', 'D', 'E' }; //array
int edges[N][N];

void addEdge(int start, int end)
{
  edges[start][end] = 1; //add edge
  
  edges[end][start] = 1; //add back edge for undirected graph
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
  
   cout << endl;
}

int getNodeId(char v)
{
  for (int i = 0; i < N; i++)
  {
    if(node[i] == v)
    {
      return i;
      break;
    }
  }

  return -1;
}

bool isAdjacent(char v1, char v2)
{
  int i = getNodeId(v1);
  int j = getNodeId(v2);

  if (i == -1|| j == -1) //invalid vertex
  {
    return false;
  }

  return edges[i][j];
}

void showAdjacent(char v)
{
  int i = getNodeId(v);

  if (i == -1)
  {
    return;
  }

  for (int j = 0; j < N; j++)
  {
    if (edges[i][j] != 0)
    {
      cout << node[j] << " ";
    }
  }

  cout << endl;
}

void removeEdge(int i, int j)
{
  if(i >= 0 && i < N && j > 0 && j < N)
  {
    edges[i][j] = false;
    edges[j][i] = false;
  }
}

int main()
{
  addEdge(0, 1);
  addEdge(0, 4);
  addEdge(1, 3);
  addEdge(2, 3);
  addEdge(2, 4);
  addEdge(3, 2);
  addEdge(3, 4);

  showMatrix();
  
  //removes edges between node 3 and node 4
  removeEdge(3, 4);
  
  showMatrix();

  return 0;
}
