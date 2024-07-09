#include <iostream>
using namespace std;
//Write a C++ Program to reverse a 1d Array
int main(){
    int n,j=0,i;
    cout<<"Give length of Array: ";
    cin>>n;
    int arr[n];
    cout<<"Give elements of Array: ";
    for(i=0; i<n; i++){
        cin>>arr[i];
    }

    int revarr[n];
    for(i=n-1; i>=0; i--){
        revarr[j] = arr[i];
        j++;
    }
    cout<<"The Reverse Array is:";
    for(i=0; i<n; i++){
        cout<<revarr[i]<<" ";
    }
    return 0;
}