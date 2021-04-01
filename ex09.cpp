/*
*  Filename: ex09.cpp
*  Programmer: Marco Andrade
*/

#include <iostream>
using namespace std;

void isPrime (int n)
{
  int count = 0;

  if (n <= 2) //base case
  {
    cout << n << " ";
  }
  else //recursion
  {
    isPrime(n-1);

    for (int i = 2; i <= n; i++)
    {
      if (n % i == 0) 
        count++;
      if (count > 2) 
        break;
    }
    if (count < 2)
    {
      cout << n << " ";
    }
  }
}

int main()
{
  int num = 0;
  
  //prompt user to enter number
  cout << "Enter a positive integer: ";
  cin >> num;

  //output tittle
  cout << "Prime numbers no larger than 170: " << endl; 

  isPrime(num); //calling function
}