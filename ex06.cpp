/*
*  Filename: ex06.cpp
*  Programmer: Marco Andrade
*/

#include <iostream>
using namespace std;

struct node
{
  int data;
  node *next;
};

node *top = NULL;

void push(int n)
{
  node *temp = new node;
  temp->data = n;
  temp->next = top;
  top = temp;
}

void pop()
{
  if (top == NULL)
  {
    cout << "null" << endl;
  }
  else
  {
    cout << "Element popped: " << top->data << endl;
    top = top->next;
  }
}

void peek()
{
  if (top < NULL )
  {
    cout << "null" << endl;
  }
  else
  {
    cout << top->data << endl;
  }
}

void findMin()
{
  node *temp;
  int mini;

  if(top==NULL)
  {
     cout << "Stack is empty...";
  }
  else
  {
     temp = top;
     mini = top->data;

     while (temp != NULL)
     {
       if (temp->data <= mini)
       {
          mini = temp->data;
       }
      
      temp = temp->next;
      
     }

    cout << "Minimum is: " << mini;

  } 
}

void display()
{
  node *temp;
	
  if (top == NULL)
  {
    cout << "stack is empty . . . ";
  }
  else
  {
    temp = top;

    cout << "Elements are: ";

    while (temp != NULL)
    {
      cout << temp->data << " ";
      temp = temp->next;
    }
  }

    cout << endl;
}

int main()
{
  push(27);
  push(16);
  push(45);
  push(19);
  push(22);
  push(24);

  display();
  findMin();

  return 0;
}