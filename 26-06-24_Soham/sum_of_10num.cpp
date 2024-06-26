#include <iostream>
using namespace std;
int main() {
  //Finding Sum and average of 10 numbers given as input by user

  int n;
  int i;
  int sum = 0;
  int avgn;

  cout << " Enter the 10 to be added and averaged: ";
  for (i=0; i<10; i++){
    cin >> n;
    sum +=n;
  }
  avgn = sum/10;
  cout << "The Sum is: " << sum << endl;
  cout << "The Average is: " << avgn << endl;
  return 0;
}