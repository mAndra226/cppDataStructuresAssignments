/*
*  Filename: ex10.cpp
*  Programmer: Marco Andrade
*/

#include <iostream>
#include <string>
using namespace std;

int k = 0;

string * stringToWord(string s)
{
  string w = "";
  string *words = new string[100];

  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] == ' ' || s[i] == ', ' || s[i] == '. ' || s[i] == '; ')
    {
      words[k] = w;
      w = "";

      k++;
    }
    else
    {
      w = w + s[i];
    }
  }

  return words;
}

bool linearSearch (string *s, string key)
{
  bool isFound = false;
  
  for(int i = 0; i < k; i++)
  {
    if (s[i] == key)
    {
      isFound = true;
      break;
    }
  }

  return isFound;
}

int main()
{
  string s = " "; //empty variable
  string key = " "; //empty variable

  cout << "Enter a paragraph: ";
  getline(cin, s); //record user sentence input 

  string *str = stringToWord(s);

  cout << "Enter a keyword: ";
  cin >> key;
  cout << linearSearch(str, key) << endl;

  cout << "Enter another keyword: "; 
  cin >> key; 
  cout << linearSearch(str, key) << endl;

  return 0;
}