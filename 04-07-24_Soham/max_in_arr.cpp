#include <iostream>
using namespace std;
//Write a C++ Program to Find the Maximum number from given a given Array also give the index of the maximum number in Array

int main(){
    int i,num,max,n,index;
    cout<<"Please give the length of Array: ";
    cin>>n;
    int numarr[n];
    cout<<"Give the elements of the Array: ";

    for (i=0; i<n; i++){
        cin>>num;
        numarr[i] = num;
    }
    max = numarr[0];
    index = 0;

    for(i=1; i<n; i++){
        if (numarr[i] > max){
            max = numarr[i];
            index = i;
        }
    }

    cout<<"The Maximum number in given Array is: "<<max<<endl;
    cout<<"The index of Maximum number is: "<<index;
    
    return 0;
}