// lab6_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Stack
{
private:
	int top;

public:
	int stack[10];

	Stack()
	{
		top = -1;
	}

	void push(int x)
	{
		if (top >= 10)
		{
			cout << "Stack Overflow \n";
		}
		else
		{
			top++; //move one level up
			stack[top] = x;

			cout << x << " inserted \n";
		}
	}

	int pop()
	{
		if (top < 0)
		{
			cout << "Stack Underflow \n";

			return 0; //means 0 element
		}
		else
		{
			int temp = stack[top];
			top--;

			return temp;
		}
	}

	void isEmpty()
	{
		if (top < 0)
		{
			cout << "Stack is empty \n";
		}
		else
		{
			cout << "Stack is not empty \n";
		}
	}

	void display()
	{
		if (top >= 0)
		{
			cout << "Stack elements: ";

			for (int i = top; i >= 0; i--)
			{
				cout << stack[i] << " ";
			}

			cout << endl;
		}
		else
		{
			cout << "Stack is empty";
		}
	}

};

int main()
{
	Stack s1;
	
	s1.push(10);
	s1.push(11);
	s1.push(12);
	s1.push(13);
	s1.push(14);
	s1.isEmpty();
	s1.display();

	cout << s1.pop() << endl;
	s1.display();

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
