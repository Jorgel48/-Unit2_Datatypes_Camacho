/*
name: Jorge Camacho
Course Section: COSC-1436-57002
Editor: repl.it
Summary:
*/
#include <iostream>
using namespace std;

int main() {
  //Input
  int i;
  cout << "How many pennis do you have?: ";
  cin >> i;
  //Process 
  int dollars = 100;
  int quarters = 25;
  int dimes = 10;
  int nickels = 5;
  int d = i / dollars;
  i %= dollars;
  int q = i / quarters;
  i %= quarters;
  int di = i / dimes;
  i %= dimes;
  int n = i / nickels;
  i %= nickels;
  //Output
  cout << "dollars " << d << endl;
  cout << "quarters " << q << endl;
  cout << " dimes " << di << endl;
  cout << " nickels " << n << endl;
  cout << "pennis" << i << endl;



  return 0;
} 