#include <iostream>
using namespace std;
// Write a Program To merge two 1-D Arrays.

int main(){
    int i,n1,n2,n3,j = 0;
    cout<<"Give length of First Array: ";
    cin>>n1;
    int arr1[n1];
    for (i=0; i<n1; i++){
        cin>>arr1[i];
    }
    cout<<"Give length of Second Array: ";
    cin>>n2;
    int arr2[n2];
    for (i=0; i<n2; i++){
        cin>>arr2[i];
    }

    n3 = n1+n2;
    int arr3[n3];
    for (i=0; i<n1; i++){
        arr3[j] = arr1[i];
        j++;
    }
    for (i=0; i<n2; i++){
        arr3[j] = arr2[i];
        j++;
    }

    cout<<"The Merged Array is: ";
    for (i=0; i<n3; i++){
        cout<<arr3[i]<<" ";
    }
    
    return 0;
}