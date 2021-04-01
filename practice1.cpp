/*
* Student: Marco Andrade
*  Course: CSCI133
*/

#include <iostream>
using namespace std;

int main()
{
  int arr[5] = { 12, 13, 14, 15, 16 };
  int *ptr = arr;
  
  cout << "i" << "\t" << "element" << endl;

  for (int i = 0; i < 5; i++)
  {
    cout << i << "\t" << ptr[i] << endl;
  }

  return 0;
}