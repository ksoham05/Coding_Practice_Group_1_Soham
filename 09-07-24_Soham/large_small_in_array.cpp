#include <iostream>
using namespace std;
//Write a Program to find Largest and Smallest number in Arrays.

int main(){
    int i,n;
    cout<<"Give the Length of Array: ";
    cin>>n;
    int arr[n];
    cout<<"Give the Elements of Array: ";
    for (i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int small = arr[0];
    int large = arr[0];
    for (i=0; i<n; i++){
        if (arr[i] > large){
            large = arr[i];
        }
        if (arr[i] < small){
            small = arr[i];
        }
    }
    cout<<"The Largest Element in Array is: "<<large<<endl;
    cout<<"The Smallest Element in Array is: "<<small<<endl;
    return 0;
}