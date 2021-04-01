// ex07.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
*  Filename: excer07.cpp
*  Programmer: Marco Andrade
*/

#include <iostream>
#include <queue>
using namespace std;

int main()
{
	queue <string> dishName;
	queue <int> serviceType;
	queue <int> number;
	queue <string> waiterWaitress;

	dishName.push("Steamed Rice Cake");
	serviceType.push(7);
	number.push(2);
	waiterWaitress.push("AJ");

	dishName.push("Vietnamese Sandwich");
	serviceType.push(4);
	number.push(1);
	waiterWaitress.push("KM");

	dishName.push("Fried Spring Rolls");
	serviceType.push(2);
	number.push(2);
	waiterWaitress.push("JR");

	dishName.push("Sizzling Pancake");
	serviceType.push(5);
	number.push(3);
	waiterWaitress.push("CW");

	dishName.push("Beef Vermicelli Soup");
	serviceType.push(1);
	number.push(2);
	waiterWaitress.push("PK");

	cout << "Dish Name\tService Type\tNumber\tWaiter\\Waitress" << endl;

	while (!dishName.empty())
	{
		cout << dishName.front() << "\t" << serviceType.front() << "\t" << number.front() << "\t" << waiterWaitress.front() << endl;

		dishName.pop();
		serviceType.pop();
		number.pop();
		waiterWaitress.pop();
	}

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
