/*

Integer Set

@AJ Enrique Arguello

12/4/2024

Objectives: Create an STL Integer Set of random #s

Using a Ranged Loop, Display all the #s in the Set

Did the program automatically sort the numbers? Explain

New Concepts: Sets

*/

#include <iostream>
#include <set>

using namespace std;

int main() {
  set<int> intSet; // initilization of integer set

  intSet.insert(34);
  intSet.insert(2);
  intSet.insert(20);
  intSet.insert(89);
  intSet.insert(100);

  for (auto pb : intSet) { // ranged loop displaying contents of set 
    cout << pb << " ";
  }
  cout << "\n";

  return 0;
}