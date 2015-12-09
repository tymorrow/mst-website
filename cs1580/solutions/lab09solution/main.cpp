/*


 */

#include <iostream>
using namespace std;
#include "peopleDb.h"

int main()
{
  Person people[MAX_DATABASE_SIZE];
  int menuSelection = 0;
  int databaseSize = 0;

  cout << "[People Database Program]" << endl;

  do
  {
    cout << endl
	 << "::: Database Options :::" << endl
         << " 1. Add Person"           << endl
	 << " 2. Output Database"      << endl
	 << " 3. Quit Program"         << endl
         << "::::::::::::::::::::::::" << endl
         << "> Selection: ";
    cin >> menuSelection;

    switch(menuSelection)
    {
      case 1:
        if(databaseSize < MAX_DATABASE_SIZE)
	{
	  people[databaseSize] = GetNewPerson();
	  
	  cout << ":: " << people[databaseSize].name 
	       << " was added to the database." << endl;
          databaseSize++;
	}
	else
	{
	  cout << "!! Database Limit Reached !!" << endl;
	}
	break;
      case 2:
	PrintDatabase(people, databaseSize);
	break;
      case 3:
	cout << endl << "[Program Terminating]" << endl;
	break;
      default:
	cout << "!! Invalid Selection !!" << endl;
    }
  }while(menuSelection != 3);
  
  return 0;
}
