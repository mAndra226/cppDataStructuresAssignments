// excer03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
*  Filename: exer03.cpp
*  Programmer: Marco Andrade
*/

#include <iostream>
using namespace std;

struct Model
{
	int age;
	char firstname[25];
	string lastname;
	char gender;
};

int main()
{
	Model m1, m2, m3;

	m1 = { 27, "Tyra", "Banks", 'F' };
	m2 = { 35, "David", "Gandy", 'M' };
	m3 = { 24, "Miranda", "Kerr", 'F' };

	cout << m1.age << "\t" << m1.firstname << "\t" << m1.lastname << "\t" << m1.gender << endl;
	cout << m2.age << "\t" << m2.firstname << "\t" << m2.lastname << "\t" << m2.gender << endl;
	cout << m3.age << "\t" << m3.firstname   << "\t" << m3.lastname << "\t" << m3.gender << endl;
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
