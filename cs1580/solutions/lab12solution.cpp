/* @auth Tyler Morrow
 * @file lab12solution.cpp
 * @date 11/10/2015
 * @sect cs1580 B/D
 * @desc
 */

#include <iostream>
#include <iomanip>
using namespace std;

/* FUNCTION DEFINITIONS */
class Dog
{
public:
  Dog();
  Dog(const string breed, const string color, const float weight);
  void Bark();
  void SetInfo();
  void CompareWith(const Dog & otherDog);
private:
  string m_breed;
  string m_color;
  float m_weight;
};

/* ENTRY POINT */
int main()
{
  Dog dog1("Labrador","Black", 65);
  Dog dog2("German Shephard","Brown",80);
  //dog1.SetInfo();
  dog1.CompareWith(dog2);

  return 0;
}

/* FUNCTION IMPLEMENTATIONS */
Dog::Dog()
{
  m_breed = "Unidentified";
  m_color = "Unknown";
  m_weight = 0;
}

Dog::Dog(const string breed, const string color, const float weight)
{
  m_breed = breed;
  m_color = color;
  m_weight = weight;
}

void Dog::SetInfo()
{
  cout << ">> Enter Breed: ";
  getline(cin, m_breed);
  cout << ">> Enter Color: ";
  getline(cin, m_color);
  cout << ">> Enter Weight: ";
  cin >> m_weight;
  cout << ":: Dog saved!" << endl
       << endl;
  return;
}

void Dog::CompareWith(const Dog & otherDog)
{
  const string ROW_BORDER = "--------------------------------------------------";
  const int COL_WIDTH = 19;

  cout << "_________________ Dog Comparison _________________" << endl;
  cout << "| Dog #  |"
       << setw(COL_WIDTH) << "(1)" << "|" << setw(COL_WIDTH) << "(2)" << "|"
       << endl << ROW_BORDER << endl
       << "| Breed  |"
       << setw(COL_WIDTH) << m_breed << "|" << setw(COL_WIDTH) << otherDog.m_breed << "|"
       << endl << ROW_BORDER << endl
       << "| Color  |"
       << setw(COL_WIDTH) << m_color << "|" << setw(COL_WIDTH) << otherDog.m_color << "|"
       << endl << ROW_BORDER << endl
       << "| Weight |"
       << setw(COL_WIDTH) << m_weight << "|" << setw(COL_WIDTH) << otherDog.m_weight << "|"
       << endl << ROW_BORDER << endl
       << endl;
  return;
}
