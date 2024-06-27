#include  <iostream>
using namespace std;
int main(){
  // Pattern of triangle
  int i,j,n;
  cout << "Give no of rows:";
  cin >> n;

  for (i=1; i<=n; i++){
    for (j=1; j<=i; j++){
      cout <<"*";
      }
      cout << endl;
    }
    
  return 0;
}
