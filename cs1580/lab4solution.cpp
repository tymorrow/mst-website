/*
 * @author  Tyler Morrow
 * @date    9/15/2015
 * @file    lab4solution.cpp
 * @course  cs1580, section B/D
 * @brief   This program estimates the number of appetizers needed for a
 *          party based on some user input or random values in a
 *          menu-driven manner.
 */

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
  /* Variable declarations */
  const short BITE_WEIGHT = 10;
  const float RATE_1 = 3.4f;       // No full meal; not during meal time
  const float RATE_2 = 5.5f;       // Has full meal; is during meal time
  const float RATE_3 = 9.75f;      // No full meal; is during meal time
  const float DURATION_MIN = 2.0;
  const float DURATION_MAX = 6.0;
  const int GUEST_MIN = 10;
  const int GUEST_MAX = 500;
  const int PACKAGE_MIN = 100;
  const int PACKAGE_MAX = 1000;
  bool hasFullMeal = false;
  bool isDuringMealTime = false;
  bool repeat = true;
  float partyDuration = 0;
  float biteRate = 0;
  int guestCount = 0;
  int appetizerWeight = 0;
  int gramsPerPackage = 0;
  int packagesNeeded = 0;
  int leftoverGrams = 0;
  short menuSelection = 0;

  // Output Greeting
  cout << "Party Appetizer Calculator" << endl
       << "==========================" << endl << endl;

  while (repeat)
  {
    cout << "===========MENU===========" << endl
         << "(1) User-provided mode" << endl
         << "(2) Random mode" << endl
         << "(3) Quit" << endl
         << "> Selection: ";
    cin  >> menuSelection;
    cout << endl;

    if (menuSelection != 1 && menuSelection != 2 && menuSelection != 3)
    {
      cout << "! Invalid menu selection, please try again." << endl << endl;
    }
    else
    {
      if (menuSelection == 1)
      {
	cout << "Appetizer Weight Estimation" << endl
	     << "---------------------------"
	     << endl
	     << "> Enter the number of guests: ";
	cin  >> guestCount;
	cout << "> Enter the party duration in hours: ";
	cin  >> partyDuration;
	cout << "> Enter a 1 if the party will be serving a full meal, "
	     << "0 otherwise: ";
	cin  >> hasFullMeal;
	cout << "> Enter a 1 if the party will occur over a meal time, "
	     << "0 otherwise: ";
	cin  >> isDuringMealTime;
	cout << "> Enter the grams per package of appetizer: ";
	cin  >> gramsPerPackage;
      }
      else if (menuSelection == 2)
      {
	cout << "* Randomly generating a party..." << endl;
	guestCount = rand() % (GUEST_MAX - GUEST_MIN) + GUEST_MIN;
	partyDuration =
	  rand() % static_cast<int>(DURATION_MAX - DURATION_MIN) + DURATION_MIN;
	gramsPerPackage = rand() % (PACKAGE_MAX - PACKAGE_MIN) + PACKAGE_MIN;
	hasFullMeal = rand() % 2;
	isDuringMealTime = rand() % 2;
	
	cout << "\\" << endl
	     << "|* Guest count: \t\t\t\t" << guestCount << endl
	     << "|* Party duration: \t\t\t\t" << partyDuration << endl
	     << "|* Has a full meal: \t\t\t\t" << hasFullMeal << endl
	     << "|* Is during meal time: \t\t\t" << isDuringMealTime << endl
	     << "|* Grams per package: \t\t\t\t" << gramsPerPackage << endl
	     << "/" << endl;
      }

      if (menuSelection == 3)
      {
	repeat = false;
      }
      else if (hasFullMeal && !isDuringMealTime)
      {
        cout << "! Sorry but the calculation failed because improper values "
	     << "were received." << endl << endl;
      }
      else
      {
	cout << "* Calculating results..." << endl;
      
	biteRate =
	  ( hasFullMeal *  isDuringMealTime * RATE_1) +
	  (!hasFullMeal * !isDuringMealTime * RATE_2) +
	  (!hasFullMeal *  isDuringMealTime * RATE_3);
	
	appetizerWeight =
	  static_cast<int>(guestCount * partyDuration * biteRate * BITE_WEIGHT);
      
	packagesNeeded = appetizerWeight / gramsPerPackage + 1;
	
	leftoverGrams = gramsPerPackage - appetizerWeight % gramsPerPackage;
	
	cout << ":: Estimated appetizers consumed (in grams):\t"
	     << appetizerWeight << endl
	     << ":: Appetizer packages needed for party: \t"
	     << packagesNeeded << endl
	     << ":: Estimated leftovers (in grams): \t\t"
	     << leftoverGrams << endl << endl;
      }
    }
  }

  // Farewell message
  cout << "! Program terminated. Thanks for using the Party Appetizer Calculator."
       << endl;

  return 0;
}
