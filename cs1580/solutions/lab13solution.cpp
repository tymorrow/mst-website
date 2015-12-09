/* @auth Tyler Morrow
 * @file lab13solution.cpp
 * @date 11/17/2015
 * @sect cs1580 B/D
 * @desc
 */

#include <iostream>
#include <iomanip>
using namespace std;

const int MAX_FOOD_BOWL_SIZE = 50;

/* FUNCTION DEFINITIONS */
class FoodBowl
{
public:
  FoodBowl();
  int GetAmount() { return m_amount; }
  void SetAmount(const int amount);
  void Refill() { SetAmount(m_capacity); }
  friend ostream &operator<<(ostream &os, const FoodBowl & foodBowl);
private:
  int m_amount;
  int m_capacity;
};

class Dog
{
public:
  Dog();
  Dog(const string name, const string breed, const string color,
      const float weight, const int hunger);
  void Bark();
  void Eat(FoodBowl & food);
  void SetInfo();
  void CompareWith(const Dog & otherDog);
  template<typename T>
  void PrintComparisonRow(const string vertSymb, const string rowBorder,
    const string header, const T value1, const T value2,
    const int col1Width, const int col2Width, const int col3Width);
  friend ostream &operator<<(ostream &os, const Dog &dog);
private:
  string m_name;
  string m_breed;
  string m_color;
  float m_weight;
  int m_hunger;
};

/* ENTRY POINT */
int main()
{
  Dog champ("Champ", "Labrador Retriever", "Black", 45, 10);
  Dog toby("Toby", "German Shephard", "Brown", 55, 10);
  FoodBowl foodBowl;

  cout << champ << toby;
  champ.CompareWith(toby);
  cout << foodBowl;
  foodBowl.Refill();
  cout << foodBowl;
  champ.Eat(foodBowl);
  toby.Eat(foodBowl);
  cout << foodBowl;
  toby.CompareWith(champ);

  return 0;
}

/* FOODBOWL FUNCTION IMPLEMENTATIONS */
FoodBowl::FoodBowl()
{
  m_amount = 0;
  m_capacity = MAX_FOOD_BOWL_SIZE;
  return;
}
void FoodBowl::SetAmount(const int amount)
{
  m_amount = (amount > m_capacity)
    ? m_capacity
    : amount;
  return;
}

ostream &operator<<(ostream &os, const FoodBowl& foodBowl)
{
  return os << ":: Food Bowl Status: "
    << foodBowl.m_amount << "/"
    << foodBowl.m_capacity << endl;
}

/* DOG FUNCTION IMPLEMENTATIONS */
Dog::Dog()
{
  m_name = "Unnamed";
  m_breed = "Unidentified";
  m_color = "Unknown";
  m_weight = 0;
  m_hunger = 10;
}

Dog::Dog(const string name, const string breed, const string color,
         const float weight, const int hunger)
{
  m_name = name;
  m_breed = breed;
  m_color = color;
  m_weight = weight;
  m_hunger = hunger;
}

void Dog::Bark()
{
  // I'm so proud of myself
  string message =
    ":: " + m_name + ": " +
    ((m_hunger >= 75)
      ? "*Whines*"
      : (m_hunger >= 50)
        ? "Woof!"
        : "Woof Woof!");
  cout << message << endl;
  return;
}

void Dog::Eat(FoodBowl & foodBowl)
{
  // Reduce hunger by amount of food in bowl.
  int hungerBowlDiff = m_hunger - foodBowl.GetAmount();
  // Reduce food in bowl by amount eaten.
  int remainingFood = foodBowl.GetAmount() - m_hunger;
  m_hunger = (hungerBowlDiff < 0) ? 0 : hungerBowlDiff;
  foodBowl.SetAmount((remainingFood < 0) ? 0 : remainingFood);
  Bark();
  return;
}

void Dog::SetInfo()
{
  cout << ">> Enter Name: ";
  getline(cin, m_name);
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
  const string ROW_BORDER =
    "------------------------------------------------------";
  const int COL1_WIDTH = 0, COL2_WIDTH = 22, COL3_WIDTH = 22;
  const string VERT_SYMB = "|";

  cout << ROW_BORDER << endl << VERT_SYMB
       << "                   Dog Comparison                   "
       << VERT_SYMB << endl << ROW_BORDER << endl;
  PrintComparisonRow<string>(
    VERT_SYMB, ROW_BORDER, "      ", "DOG 1", "DOG 2",
    COL1_WIDTH, COL2_WIDTH, COL3_WIDTH);
  PrintComparisonRow<string>(
    VERT_SYMB, ROW_BORDER, "  Name", m_name, otherDog.m_name,
    COL1_WIDTH, COL2_WIDTH, COL3_WIDTH);
  PrintComparisonRow<string>(
    VERT_SYMB, ROW_BORDER, " Breed", m_breed, otherDog.m_breed,
    COL1_WIDTH, COL2_WIDTH, COL3_WIDTH);
  PrintComparisonRow<string>(
    VERT_SYMB, ROW_BORDER, " Color", m_color, otherDog.m_color,
    COL1_WIDTH, COL2_WIDTH, COL3_WIDTH);
  PrintComparisonRow<float>(
    VERT_SYMB, ROW_BORDER, "Weight", m_weight, otherDog.m_weight,
    COL1_WIDTH, COL2_WIDTH, COL3_WIDTH);
  PrintComparisonRow<int>(
    VERT_SYMB, ROW_BORDER, "Hunger", m_hunger, otherDog.m_hunger,
    COL1_WIDTH, COL2_WIDTH, COL3_WIDTH);
  cout << endl;
  return;
}

template <typename T>
void Dog::PrintComparisonRow(const string vertSymb, const string rowBorder,
  const string header, const T value1, const T value2,
  const int col1Width, const int col2Width, const int col3Width)
{
  cout << setw(col1Width) << vertSymb << header << vertSymb
       << setw(col2Width) << setprecision(2) << value1 << vertSymb
       << setw(col3Width) << setprecision(2) << value2 << vertSymb
       << endl << rowBorder << endl;
  return;
}

ostream &operator<<(ostream &os, const Dog &dog)
{
  return os
    << dog.m_name
    << "(H: " << dog.m_hunger << ")"
    << endl;
}
