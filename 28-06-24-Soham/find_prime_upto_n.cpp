#include <iostream>
using namespace std;
// Finding prime numbers upto given num

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
    cout << "Give the no upto which prime numbers are to be found"<<endl;
    cin >> n;

    for(i=2; i<=n; i++){
        if(is_prime(i)){
            cout << i << " ";
        }
        }
    return 0;
}