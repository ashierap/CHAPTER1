/*
Write a program that asks the user to enter an item's wholesale cost 
and its markup percentage. It should then display the item's retail 
price. For example:
    a.	If an item's wholesale cost is $5.00 and its markup 
        percentage is 100 percent, then the item's retail price 
        is $10.00.
    b.	If an item's wholesale cost is $5.00 and its markup 
        percentage is 50 percent, then the item's retail price is $7.50.

The program should have a function named calculateRetail that receives 
the wholesale cost and the markup percentage as arguments and returns 
the retail price of the item.
*/

// include all needed Library
#include <iostream>
#include <iomanip>

using namespace std;

double calculateRetail(double wholesale, double percentage)
{
    double retail;
    retail = wholesale * (1 + (percentage/100));
    return retail;
}


int main()
{
  double user_wholesale;
  double user_percentage;
  
  cout << endl << "*******************************************************************************************************";
  cout << endl << " This program calculates an item's retail price based on the markup percentage and the wholesale price";
  cout << endl << "*******************************************************************************************************";
  
  cout << "\n\n Enter the wholesale price (dollars): ";
  cin >> user_wholesale;
  cout <<   " Enter the markup percentage        : ";
  cin >> user_percentage;
  cout << "\n The retail price is $" << fixed << setprecision(2) << calculateRetail(user_wholesale, user_percentage);
  return 0;
}
