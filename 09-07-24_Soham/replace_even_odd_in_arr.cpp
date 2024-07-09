#include <iostream>
using namespace std;
//Write a Program to replace all Even numbers by 0 and Odd numbers by 1 in a One Dimensional Array.

int main(){
    int i,n;
    cout<<"Give the Length of Array: ";
    cin>>n;
    int arr[n];
    cout<<"Give the Elements of Array: ";
    for (i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"The given Array is: ";
    for (i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    for (i=0; i<n; i++){
        if (arr[i] % 2 == 0){
            arr[i] = 0;
        }
        else{
            arr[i] = 1;
        }
    }
    cout<<"The Replaced Array is: ";
    for (i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}