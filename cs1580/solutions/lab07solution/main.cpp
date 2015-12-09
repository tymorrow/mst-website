/*
 * @author  Tyler Morrow
 * @date    10/06/2015
 * @file    Main.cpp
 * @course  cs1580, section B/D
 * @brief   Implementing a clean, well-documented, function-based menu that 
 *          uses pass-by-value and pass-by-reference.
 */

#include <iostream>
#include "calcFunctions.h"
using namespace std;

int main()
{
  short menuSelection = 0;
  float quantityX = 0;
  float quantityY = 0;
  float result = 0;
  float remainder = 0;

  cout << "[Simple Calculator]" << endl << endl;
  
  do
  {
    cout << "----------MENU---------" << endl
         << "(1) Add \t(x+y)" << endl
         << "(2) Subtract \t(x-y)" << endl
         << "(3) Multiply \t(x*y)" << endl
	 << "(4) Divide \t(x/y)" << endl
	 << "(5) Quit" << endl
         << "> Selection: ";
    cin  >> menuSelection;
    
    if(menuSelection == 1 || menuSelection == 2 ||
       menuSelection == 3 || menuSelection == 4)
    {
      cout << "> X-value: ";
      cin >> quantityX;
      cout << "> Y-value: ";
      cin >> quantityY;
      cout << endl;
    }
    switch(menuSelection)
    {
      case 1:
	Add(quantityX, quantityY, result);
	cout << ":: Addition Result: \t"
	     << result << endl << endl;
	break;
      case 2:
	Subtract(quantityX, quantityY, result);
	cout << ":: Subtraction Result: \t"
	     << result << endl << endl;
	break;
      case 3:
	Multiply(quantityX, quantityY, result);
	cout << ":: Product Result: \t"
	     << result << endl << endl;
	break;
      case 4:
	if(quantityX != 0)
	{
	  Divide(quantityX, quantityY, result, remainder);
	  cout << ":: Division Result: \t"
	       << result << endl
	       << ":: Division Remainder: \t"
	       << remainder << endl << endl;
	}
	else
	{
	  cout << "!! Quantity X cannot equal zero!" << endl << endl;
	}
	break;
      case 5:
	cout << "[Program Quitting]" << endl;
	break;
      default:
	cout << "!! Menu selection invalid. Please try again." << endl;
	break;
    }
  }while(menuSelection != 5);
  
  return 0;
}

