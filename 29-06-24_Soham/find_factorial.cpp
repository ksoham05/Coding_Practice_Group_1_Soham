#include <iostream>
using namespace std;
// find factorial of a given num
int main(){
    int fact = 1;
    int num;
    int i;
    
    cout << "Give the number whose factor is to be found: "<<endl;
    cin >> num;

    for(i=1; i<=num; i++){
        fact = fact*i;
    }
    printf("The factorial of %d is : %d",num,fact);
    return 0;
}