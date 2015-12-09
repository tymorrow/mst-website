/*

 */

#ifndef PEOPLEDB_H
#define PEOPLEDB_H

#include <iostream>
using namespace std;

const int MAX_DATABASE_SIZE = 5;

struct Person
{
  string name;
  int age;
  string favIceCream;
};

/*

 */
Person GetNewPerson();

/*

 */
void PrintDatabase(const Person people[], const int dbSize);

#endif
