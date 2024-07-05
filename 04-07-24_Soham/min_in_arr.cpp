#include <iostream>
using namespace std;
//Write a C++ Program to Find the Minimum number from given a given Array also give the index of the minimum number in Array

int main(){
    int i,num,min,n,index;
    cout<<"Please give the length of Array: ";
    cin>>n;
    int numarr[n];
    cout<<"Give the elements of the Array: ";

    for (i=0; i<n; i++){
        cin>>num;
        numarr[i] = num;
    }
    min = numarr[0];
    index = 0;

    for(i=1; i<n; i++){
        if (numarr[i] < min){
            min = numarr[i];
            index = i;
        }
    }

    cout<<"The Minimum number in given Array is: "<<min<<endl;
    cout<<"The index of Minimum number is: "<<index;
    
    return 0;
}