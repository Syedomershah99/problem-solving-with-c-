/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>

int
main ()
{
  int hours, minutes;

  std::cout << "Enter hours: ";
  std::cin >> hours;

  std::cout << "Enter minutes: ";
  std::cin >> minutes;

  hours = hours % 12;

  double hourAngle = (hours * 30) + (minutes * 0.5);

  double minuteAngle = minutes * 6;

  double angle = std::abs (hourAngle - minuteAngle);

  angle = std::min (angle, 360 - angle);

  std::
    cout << "The smaller angle between the hour and minute hands is: " <<
    angle << " degrees" << std::endl;

  return 0;
}
