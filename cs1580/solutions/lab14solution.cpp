#include <iostream>
#include <iomanip>
using namespace std;

class dog
{
public:
  dog() : m_name("Champ"), m_weight(50) {}
  dog(string name, int weight) : m_name(name), m_weight(weight) {}
  string get_name() const { return m_name; }
  static string get_species() { return "Dog"; }
private:
  string m_name;
  int m_weight;
};

class cat
{
public:
  cat() : m_name("Mittens"), m_weight(20) {}
  cat(string name, int weight) : m_name(name), m_weight(weight) {}
  string get_name() const { return m_name; }
  static string get_species() { return "Cat"; }
private:
  string m_name;
  int m_weight;
};

/*
  List preconditions / requirements of the templated type T
  - Needs a default constructor, so that we can create an array of them
  - Must support assignment with the `=` operator
  - Must have a public `getName()` member function that returns the
    name of the animal as a string
  - Must have a public `getSpecies()` member function that returns the
    species of the animal as a string
 */
template <class T>
class kennel
{
public:
  kennel() : m_num_residents(0) {}
  bool add_resident(const T pal);
  void print_residents();
  const static int NUM_RESIDENTS = 3;
private:
  int m_num_residents;
  T m_residents[NUM_RESIDENTS];
};

template <class T>
bool kennel<T>::add_resident(const T pal)
{
  bool added = false;
  if (m_num_residents < NUM_RESIDENTS)
  {
    added = true;
    m_residents[m_num_residents++] = pal;
    cout << "Added " << pal.get_name() << " (" << pal.get_species() << ")"
         << endl;
  }
  else
  {
    cout << "Could not add " << pal.get_name() << endl;
  }

  return added;
}

template <class T>
void kennel<T>::print_residents()
{
  cout << "________________________________________________" << endl;
  cout << "|" << setw(5) << "#|"
       << setw(21) << "Name|"
       << setw(21) << "Species|" << endl
       << "------------------------------------------------" << endl;
  for(int i = 0; i < m_num_residents; i++)
  {
    cout << "|" << setw(4) << i+1 << "|"
         << setw(20) << m_residents[i].get_name() << "|"
         << setw(20) << m_residents[i].get_species() << "|"
         << endl
         << "------------------------------------------------"
         << endl;
  }
}

int main()
{
  dog d1, d2("Bruno", 40), d3("Prince", 30);
  cat c1("Whiskers", 25);
  kennel<dog> dog_kennel;
  kennel<cat> cat_kennel;
  kennel<int> int_kennel;

  dog_kennel.add_resident(d1);
  dog_kennel.add_resident(d2);
  dog_kennel.add_resident(d3);
  dog_kennel.add_resident(d1);
  cat_kennel.add_resident(c1);
  cat_kennel.print_residents();

  return 0;
}
