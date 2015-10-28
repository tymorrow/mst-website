/*


 */

#include "peopleDb.h"

Person GetNewPerson()
{
  Person newPerson;
  
  cout << ":: Please provide some info about the person ::" << endl
       << ">      Name: ";
  cin >> newPerson.name;
  cout << ">       Age: ";
  cin >> newPerson.age;
  cout << "> Ice Cream: ";
  cin >> newPerson.favIceCream;
  
  return newPerson;
}

void PrintDatabase(const Person people[], const int dbSize)
{
  for(int i = 0; i < dbSize; i++)
  {
    cout << ":: Database Contents ::" << endl
	 << "[" << i + 1 << "] "
         << people[i].name
	 << " (age " << people[i].age << ")"
	 << " (likes " << people[i].favIceCream << " ice cream)"
	 << endl;
  }
}
