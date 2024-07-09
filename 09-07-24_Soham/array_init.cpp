#include <iostream>
using namespace std;
// Initialize One Dimensional array and display Array elements within curly Brackets.
int main(){
    int n,i;
    cout<<"Give the length of Array: ";
    cin>>n;
    int arr[n];

    cout<<"Give elements of array: ";
    for (i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"The Array is: ";
    cout<<"{";
    for (i=0; i<n; i++){
        if (i == n-1){
            cout<<arr[i];
        }
        else{
        cout<<arr[i]<<",";
        }
    }
    cout<<"}";
    return 0;
}