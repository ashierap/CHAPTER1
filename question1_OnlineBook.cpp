/*
 1.	An online book club awards points to its customers based 
    on the number of books purchased each month. 
    See the pdf for the poinst earned
    Write a program that asks the user to enter the number of 
    books purchased this month and then displays the number of 
    points awarded.
*/



// include all needed Library
#include <iostream>


using namespace std;


int main()
{
  int books;
  int points;
  bool status = true;
  
  cout << "\n*************************************************************************************************";
  cout << "\n This program calculates your book club awards points based on the number of books you purchased\n";
  cout << "*************************************************************************************************\n\n";
  
  while (status)
    {
        cout << "\n Enter the number of books you've purchased this month: ";
        cin >> books;
        if (books >= 0)
            {
                status = false;
            }
                
        else
            {
                cout << " The number of books must be 0 or more\n";
                status = true;
            }
    }

  switch (books)
    {
        case 0 : 
            points = 0;
            break;
        case 1 : 
            points = 5;
            break;
        case 2 : 
            points = 15;
            break;
        case 3 : 
            points = 30;
            break;
        default: points = 50;
    }
  cout << "\n You have earned " << points << " points";
  return 0;
}
