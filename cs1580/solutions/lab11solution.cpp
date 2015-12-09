OA/*
 @auth  Tyler Morrow
 @date  11/3/2015
 @sect  cs1580 B/D
 @file  lab11solution.cpp
 @desc  This program attempts to reassemble a hardcoded string based
        on some provided rules.
 */

#include <iostream>
using namespace std;

void Replace(char text[], char oldChar, char newChar);

int main()
{
  char text[250] = "Yzu^wpll^nzt[rfcfpve[an>F^zn>thp*>a**pgnmfnt!";
  int counter = 0, counter2 = 0;
  
  cout << text << endl << endl;

  Replace(text, '*', 's');
  Replace(text, 'z', 'o');
  Replace(text, '^', ' ');
  Replace(text, '[', ' ');
  Replace(text, '>', ' ');
  Replace(text, 'p', 'i');
  Replace(text, 'f', 'e');
  
  /**** PART OF BONUS ****/
  Replace(text, 'F', 'A');
  
  while(text[counter + 2] != '\0')
  {
    if(text[counter] == 'n' && text[counter+1] == 'o' &&
       text[counter+2] == 't')
    {
      counter2 = counter;
      for(int i = counter+4; text[i] != '\0'; i++)
      {
	text[counter] = text[i];
	counter++;
      }
      text[counter] = '\0';
      counter = counter2;
    }
    counter++;
  }
  cout << text << endl << endl;

  cout << "[Program Terminated]"  << endl;

  return 0;
}

void Replace(char text[], char oldChar, char newChar)
{
  int counter = 0;

  while(text[counter] != '\0')
  {
    if (text[counter] == oldChar)
      text[counter] = newChar;
    counter++;
  }
  cout << text << endl << endl;
  return;
}
