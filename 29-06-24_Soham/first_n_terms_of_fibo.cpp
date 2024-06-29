#include <iostream>
using namespace std;
//Find first n terms of Fibonacci series

int main(){
    int n;
    long long int num1,num2;
    int temp;
    int count=0;

    cout<<"Give the number of terms of Fibonacci series to be Printed:(Give n greater than 2)";
    cin>>n;

    num1=0;
    num2=1;
    if(n<2){
        cout<<"Give Larger sequence to be found!!";
    }
    else{
        printf("The first %d terms of Fibonacci series are ",n);
        cout << num1<<" "<<num2<<" ";
        count+=2;
        while (count < n){
        temp = num2;
        num2 = num1+num2;
        cout<<num2<<" ";
        num1 = temp; 
        count +=1;
        }
    }
    return 0;
}
