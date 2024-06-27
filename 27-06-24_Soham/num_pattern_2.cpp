#include  <iostream>
using namespace std;

int main(){
  // Pattern of num reversed 
  int i,j,n;
  cout << "Give no of rows:";
  cin >> n;

  for (i=n; i>=1; i--){
    for (j=i; j>=1; j--){
      cout<<i;
      }
      cout << endl;
    }
    
  return 0;
}