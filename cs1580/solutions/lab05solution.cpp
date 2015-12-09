/*
 * @author  Tyler Morrow
 * @date    9/22/2015
 * @file    lab5solution.cpp
 * @course  cs1580, section B/D
 * @brief   This program calculates the total price of the user's sandwich order.
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  const float TAX = 1.078;
  const float CHICKEN_PRICE = 2.50;
  const float TURKEY_PRICE = 2.00;
  const float BLT_PRICE = 3.00;
  const float VEGGIE_PRICE = 1.50;
  float totalPrice = 0;
  int sandwichCount = 0;
  int sandwichChoice = 0;
  bool selectionIsValid;

  cout << "[Sandwich Price Calculator]" << endl << endl;

  cout << "Number of sandwiches: ";
  cin >> sandwichCount;
  cout << endl;

  // Loops until the counter is equal to the number of sandwiches
  for(int i = 1; i <= sandwichCount; i++)
  {
    selectionIsValid = false;
    do
    {
      // 'setprecision(2)' keeps decimals on prices.
      cout << "=====SANDWICH MENU=====" << endl;
      cout << "  1) Chicken----$"
	   << fixed << setprecision(2) << CHICKEN_PRICE << endl;
      cout << "  2) Turkey-----$"
	   << fixed << setprecision(2) << TURKEY_PRICE << endl;
      cout << "  3) BLT--------$"
	   << fixed << setprecision(2) << BLT_PRICE << endl;
      cout << "  4) Veggie-----$"
	   << fixed << setprecision(2) << VEGGIE_PRICE << endl;
      cout << "  Selection #" << i << ": ";
      cin >> sandwichChoice;

      if(sandwichChoice >= 1 && sandwichChoice <= 4)
      {
	selectionIsValid = true;
      }
      else
      {
	cout << endl << "!! Selection invalid, please try again."
	     << endl << endl;
      }
    } while(!selectionIsValid);

    // Applies the appropriate price change to the total based
    // on selections.
    switch(sandwichChoice)
    {
      case 1:
	totalPrice += CHICKEN_PRICE;
        break;
      case 2:
	totalPrice += TURKEY_PRICE;
        break;
      case 3:
	totalPrice += BLT_PRICE;
        break;
      case 4:
        totalPrice += VEGGIE_PRICE;
	break;
    }
    cout << endl;
  }

  // Outputs total price. 'setprecision(2)' sets decimal to hundredths place.
  cout << "=====ORDER SUMMARY=====" << endl
       << "   Sandwiches- "  << sandwichCount << endl
       << "   Subtotal--- $" << fixed << setprecision(2) << totalPrice << endl
       << "   Tax Rate--- " << fixed << setprecision(2)
       << (TAX-1.0)*100 << "%" << endl
       << "   Total------ $" << fixed << setprecision(2) << totalPrice*TAX
       << endl << endl
       << "[Calculation complete, program terminating]" << endl;
  
  return 0;
}
