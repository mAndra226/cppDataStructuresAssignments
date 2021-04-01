// ex01.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Filename: ex01.cpp
//Programmer: Marco Andrade

#include <iostream>
using namespace std;

struct Student
{
	string firstname;
	string lastname;
	int age;
	char gender;
	string studentid;
	string major;
	bool married;
};


int main()
{
	Student s01, s02, s03, s04;

	s01 = { "Emiley", "Smith", 54, 'F', "D88002301", "CIS", 1 };
	s02 = { "Steve", "Barley", 27, 'M', "D88002302", "MBA", 1 };
	s03 = { "Nicole", "Chang", 36, 'F', "D88002303", "CET", 0 };
	s04 = { "Justin", "Poliki", 25, 'M', "D88002304", "HIT", 1 };


	cout << s01.firstname << "\t" << s01.lastname << "\t" << s01.age << "\t" << s01.gender << "\t" << s01.studentid << "\t" << s01.major << "\t" << s01.married << endl;
	cout << s02.firstname << "\t" << s02.lastname << "\t" << s02.age << "\t" << s02.gender << "\t" << s02.studentid << "\t" << s02.major << "\t" << s02.married << endl;
	cout << s03.firstname << "\t" << s03.lastname << "\t" << s03.age << "\t" << s03.gender << "\t" << s03.studentid << "\t" << s03.major << "\t" << s03.married << endl;
	cout << s04.firstname << "\t" << s04.lastname << "\t" << s04.age << "\t" << s04.gender << "\t" << s04.studentid << "\t" << s04.major << "\t" << s04.married << endl;
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
