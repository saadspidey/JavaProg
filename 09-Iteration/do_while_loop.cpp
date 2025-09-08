/**********************************************************************

  Program Title : Demonstrating Do...While Loop in C++
  File Name: "do_while_loop.cpp"

  Programmer : Sathish Sarma
  Contact Details : sathish.sarma@newinti.edu.my
  Date : 08 September 2025

 **********************************************************************/

#include <iostream>
using namespace std;

int main() {
    // Demonstrate loop executes at least once
    int k = 15;

    cout << "\nDemonstrating do...while executes at least once:" << endl;

    do {
        cout << "Value of k = " << k << endl;
        k++;
    } while (k <= 10); // Condition is false, but loop runs once

    return 0;
}
