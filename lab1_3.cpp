// lab1_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct seasons
{
	int index;
	string value;
};

int main()
{
	seasons s1, s2, s3, s4;
	
	s1 = { 0, "Spring" };
	s2 = { 1, "Summer" };
	s3 = { 2, "Fall" };
	s4 = { 3, "Winter" };

	cout << s1.index << " " << s1.value << endl;
	cout << s2.index << " " << s2.value << endl;
	cout << s3.index << " " << s3.value << endl;
	cout << s4.index << " " << s4.value << endl;

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
