#include <iostream>
using namespace std;

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
    int n;
    cout<<"Give the number to be checked";
    cin>>n;

    if(is_prime(n)){
        cout<<"The number "<< n <<"is PRIME";
    }
    else{
        cout<<"The number "<< n <<" is NOT PRIME";
    } 


}