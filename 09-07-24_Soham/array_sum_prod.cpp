#include <iostream>
using namespace std;
//Take a Array from user and Calculate Sum and Product of all elements.

int main(){
    int n,i;
    cout<<"Give the length of Array: ";
    cin>>n;
    int arr[n];

    cout<<"Give elements of array: ";
    for (i=0; i<n; i++){
        cin>>arr[i];
    }
    int summ = 0;
    int prod = 1;
    for (i=0; i<n; i++){
        summ += arr[i];
    }
    for (i=0; i<n; i++){
        prod = prod*arr[i];
    }

    cout<<"The Sum of all elements in Array: "<<summ<<endl;
    cout<<"The Product of all elements in Array: "<<prod<<endl;
    return 0;
}