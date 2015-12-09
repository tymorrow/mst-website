#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;


void printVector(vector<int>* integers)
{
  cout << "Vector: ";
  for (vector<int>::iterator it = integers->begin(); it != integers->end(); ++it)
    cout << ' ' << *it;
  cout << '\n';
  return;
}

int main()
{
  // VECTOR SOLUTION
  int myints[] = {10,9,8,7,6,5,4,3,2,1};
  vector<int>* integers = new vector<int>(myints, myints + sizeof(myints) / sizeof(int));
  printVector(integers);
  std::sort(integers->begin(), integers->end());
  printVector(integers);
  integers->pop_back();
  integers->pop_back();
  integers->pop_back();
  printVector(integers);
  cout << "Size: " << integers->size() << endl;
  cout << "Capacity: " << integers->capacity() << endl;
  cout << "Max Size: " << integers->max_size() << endl;
  integers->clear();
  printVector(integers);

  // MAP SOLUTION
  std::map<string,int> wordCounts;
  string received;

  while(received != "QUIT")
  {
    cout << "Enter a word: ";
    cin >> received;
    ++wordCounts[received];
  }

  for (std::map<string,int>::iterator it=wordCounts.begin(); it!=wordCounts.end(); ++it)
    std::cout << it->first << " => " << it->second << '\n';

  return 0;
}
