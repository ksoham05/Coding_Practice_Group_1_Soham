#include <iostream>
using namespace std;

int main(){
  //Finding All Cubes upto given num
  int i;
  int n;

  cout << "Give the number upto which cubes are to be found: ";
  cin >> n;
  
  for (i=1; i<=n; i++){
    cout << i << " -- " << i*i*i << endl;
  }
  return 0;
}
