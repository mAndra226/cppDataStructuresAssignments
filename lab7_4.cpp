// lab7_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
#include <queue>
using namespace std;

void display(queue <int> q)
{
	cout << "Elements: ";
	while (!q.empty())
	{
		cout << q.front() << " ";
		q.pop();
	}
	cout << endl;
}

int main()
{
	queue <int> q1;

	cout << "empty(): " << q1.empty() << endl;

	q1.push(3);
	q1.push(5);
	q1.push(9);
	q1.push(1);
	q1.push(12);
	q1.push(15);
	q1.push(18);
	q1.push(21);
	q1.push(22);
	q1.push(24);
	display(q1);

	cout << "size(): " << q1.size() << endl;
	cout << "front(): " << q1.front() << endl;
	cout << "back(): " << q1.back() << endl;

	q1.pop();
	q1.pop();
	display(q1);

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
