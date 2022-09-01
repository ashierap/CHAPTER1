/*
2.	The distance a vehicle travel can be calculated as follows:
    Distance = speed * time
    For example, if a train travel 40 miles per hour for 3 hours, 
    the distance traveled is 120 miles.
    Write a program that asks the user for the speed of a vehicle 
    (in miles per hour) and how many hours it has traveled. 
    It should then use a loop to display the total distance traveled 
    at the end of each hour of that time period. Here is an example of 
    the output:
*/



// include all needed Library
#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
  double speed, trip_time;
  int i;
  cout << "\n***************************************************************************************";
  cout << "\n This program calculates the hourly and total distace you've traveled during your trip\n";
  cout << "***************************************************************************************\n\n";
  
  cout << " Enter the vehicle speed (mph): ";
  cin >> speed;
  cout << " Enter the trip length (hours): ";
  cin >> trip_time;
  cout << "\n-------------------------------------------------------------------------------------------\n";
  cout << "          Hour                                                           Distance         ";
  cout << "\n-------------------------------------------------------------------------------------------";
  for (i = 1; i <= trip_time; i++)
  {
  cout << endl << setw(10) << " " << setw(62) << left << i << speed*i;
  }
  
  if (!(trip_time == (i-1)))
  {
  cout << endl << setw(10) << " " << trip_time << setw(63) << left << speed*trip_time;
  }
  return 0;
}
