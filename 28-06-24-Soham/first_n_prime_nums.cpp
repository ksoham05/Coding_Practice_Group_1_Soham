#include <iostream>
using namespace std;
// finding first n prime numbers given a starting point

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    if (n == 2) {
        return true;
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main(){
    int i;
    int n;
    int num1;

    cout <<"From where to find Prime Nums";
    cin >>num1;
    cout <<" How many Prime numbers to find:";
    cin >>n;

    cout <<"The Prime numbers are: " <<endl;

    while(n != 0){
        i=num1;
        if(is_prime(i)){
            cout << i << " ";
            n-=1;
        }
        num1+=1;
        }
    return 0;
}
 