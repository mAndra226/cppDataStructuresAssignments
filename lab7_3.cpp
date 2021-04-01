// lab7_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
using namespace std;

class Queue
{
	int size;
	int* queue = new int[size];
	int head = 0; //the first element
	int tail = -1;

public:
	
	Queue()
	{
		size = 10;
	}

	Queue(int _size)
	{
		size = _size;
	}

	void push(int x)
	{
		if (tail == size - 1)
		{
			cout << "Queue is full";
		}
		else
		{
			tail++;

			queue[tail] = x;
		}
	}

	void pop()
	{
		cout << "Element popped: " << queue[head] << endl;

		for (int i = 1; i <= tail; i++)
		{
			queue[i - 1] = queue[i];
		}

		queue[tail] = NULL;

		tail--;
	}

	void peek()
	{
		if (tail < 0)
		{
			cout << "Empty queue." << endl;
		}
		else
		{
			cout << queue[head] << endl;
		}
	}

	void display()
	{
		int i;
		for (i = 0; i <= tail; i++)
		{
			cout << queue[i] << " ";
		}

		cout << endl;
	}
};

int main()
{
	int* x = new int[10];

	cout << "Enter 10 integers: ";
	
	cin >> x[0] >> x[1] >> x[2] >> x[3] >> x[4] >> x[5] >> x[6] >> x[7] >> x[8] >> x[9];
	
	Queue* q1 = new Queue(10);
	
	for (int i = 0; i < 10; i++)
	{
		q1->push(x[i]); //insert elements
	}
	
	q1->peek();
	q1->display();

	q1->pop();
	q1->display();
	q1->pop();
	q1->pop();
	q1->display();
	
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
