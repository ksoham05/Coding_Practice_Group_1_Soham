#include <iostream>
using namespace std;
int main(){
  //Finding Sum of odd terms upto n terms and display the odd no
  int i;
  int n;
  int sum = 0;
  cout << "Give the number upto which sum of odd terms to be found: ";
  cin >> n;
  
  cout << " The odd numbers are";
  for (i=1;i<=n;i++){
    if (i%2 != 0){
      sum+=i;
      cout << i << " ";
    }
  }
  cout <<"\n"<< "The Sum of Odd terms is: "<< sum;
  return 0;
}