/*
*  Filename: ex08.cpp
*  Programmer: Marco Andrade
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  double x = 0.0;
  double i = 0.1; //starting position
  double visCo = 0.447; //viscosity of laminar flow
  double gasDens = 0.719; //gas density

  //title
  cout << "Pipe Diameter" << "\t" << "Speed" << endl;

  do
  {
    //calculation
    double tFlow = (2000 * (visCo) * pow(10,-3)) / (i * (gasDens) * pow(10,3));
    cout << x + i << "\t" << tFlow << endl; //output
    i+=0.1;

  } while (i <= 2.4); //stops once it reaches 2.4

  return 0;
}