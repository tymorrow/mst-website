
/*
@author  Tyler Morrow
@date    9/8/2015
@file    lab3solution.cpp
@course  cs1580, section B/D
@brief   This program estimates the number of appetizers needed for a 
         party based on some user input and pre-defined constants.  
*/

#include <iostream>
using namespace std;

int main()
{
  /* Variable declarations */
  const short BITE_WEIGHT = 10;
  const float RATE_1 = 3.4;       // No full meal; not during meal time
  const float RATE_2 = 5.5;       // Has full meal; is during meal time
  const float RATE_3 = 9.75;      // No full meal; is during meal time
  bool hasFullMeal = false;
  bool isDuringMealTime = false;
  float partyDuration = 0;
  float biteRate = 0;
  int guestCount = 0;
  int appetizerWeight = 0;
  int gramsPerPackage = 0;
  int packagesNeeded = 0;
  int leftoverGrams = 0;

  // Output Greeting 
  cout << "Party Appetizer Calculator" << endl
       << "==========================" << endl << endl;

  // Get needed user inputs for appetizer weight calculation
  cout << "Appetizer Weight Estimation" << endl
       << "---------------------------"
       << endl
       << "> Enter the number of guests: ";
  cin  >> guestCount;
  cout << "> Enter the party length in hours: ";
  cin  >> partyDuration;
  cout << "> Enter a 1 if the party will be serving a full meal, 0 otherwise: ";
  cin  >> hasFullMeal;
  cout << "> Enter a 1 if the party will occur over a meal time, 0 otherwise: ";
  cin  >> isDuringMealTime;
  cout << "> Calculating results..." << endl;

  // Perform calculations 
  biteRate =
    ( hasFullMeal *  isDuringMealTime * RATE_1) +
    (!hasFullMeal * !isDuringMealTime * RATE_2) +
    (!hasFullMeal *  isDuringMealTime * RATE_3);

  appetizerWeight =
    static_cast<int>(guestCount * partyDuration * biteRate * BITE_WEIGHT);

  // Output appetizer weight result
  cout << ":: Estimated appetizers consumed (in grams):\t"
       << appetizerWeight << endl << endl;

  // Get needed user input for packages to buy and leftovers
  cout << "Packages to Buy & Leftover Estimation" << endl
       << "-------------------------------------" << endl
       << "> Enter the grams per package of appetizer: ";
  cin  >> gramsPerPackage;
  cout << "> Calculating results..." << endl;

  // Perform calculations
  packagesNeeded = appetizerWeight / gramsPerPackage + 1;
  leftoverGrams = gramsPerPackage - appetizerWeight % gramsPerPackage;

  // Output packages to buy and leftover results
  cout << ":: Appetizer packages needed for party: \t"
       << packagesNeeded << endl
       << ":: Estimated leftovers (in grams): \t\t"
       << leftoverGrams << endl << endl;

  // Farewell message
  cout << "Program completed. Thanks for using the Party Appetizer Calculator."
       << endl;
  
  return 0;
}
