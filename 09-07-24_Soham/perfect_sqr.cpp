#include <iostream>
using namespace std;
// Write a program to check whether to a given number is a Perfect Square or not.

int main(){
    int i,n;
    bool flag = false;

    cout<<"Give the number to be checked to be Perfect Square: ";
    cin>>n;

    for (i=1; i<=n/2; i++){
        if (i*i == n){
            flag = true;
            break;
        }
    }
    if (flag) {
        cout<<"The Given Number is a Perfect Square: ";
    }
    else{
        cout<<"The Given Number is NOT a Perfect Square: ";
    }
    return 0;
}