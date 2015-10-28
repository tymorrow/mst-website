/*
 * @author  Tyler Morrow
 * @date    10/27/2015
 * @file    lab10solution.cpp
 * @course  cs1580, section B/D
 * @brief   This program reads in a file, replaces a specified character,
 *          and then outputs the result.
 */
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  const string FILE_NAME = "input.dat";
  const int FILE_SIZE = 1000;
  ifstream in;
  char fileContents[FILE_SIZE];
  char target, replacement, current;
  int characterCounter = 0;

  cout << "[Character Replacement Program]" << endl << endl;
  cout << "> Enter the target character: ";
  cin >> target;
  cout << "> Enter the new character: ";
  cin >> replacement;
  cout << endl << ":: Performing replacement... ::" << endl << endl;

  in.open(FILE_NAME.c_str());
  cout << ":: Result ::" << endl;
  while (in.get(current))
  {
    if(current == target) current = replacement;
    fileContents[characterCounter] = current;
    if (characterCounter % 78 == 0) cout << endl;
    cout << fileContents[characterCounter];
    characterCounter++;
  }
  in.close();

  cout << endl << "[Program Terminating]" << endl;
  return 0;
}
