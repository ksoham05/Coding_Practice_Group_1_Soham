#include <iostream>
using namespace std;
//Write a Program in C++ to insert a Given Element at a Given index in a list given by user, Display updated list.

int main(){
    int i,n,ind,num;
    
    cout<<"Give the length of Array: ";
    cin>>n;
    int arr[n+n];
    cout<<"Give elements of array: ";
    for (i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Give the Number to be inserted: ";
    cin>>num;
    cout<<"Give the Index at which number is to be Inserted: ";
    cin>>ind;

    for (i=n; i>=ind+1; i--){
        arr[i] = arr[i-1];
    }

    arr[ind] = num;

    for(i=0; i<n+1; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}