#include <iostream>
#include <cmath>
#include <string>
using namespace std;
//Write a C++ Program to Perform Mathematical Calulations by taking input from user through menu driven options to choose operations and exit the program

float add(float a,float b){
    float sum;
    sum = a+b;
    return sum;
}
float sub(float a,float b){
    float diff;
    diff = a-b;
    return diff;
} 
float mult(float a,float b){
    float mul;
    mul = a*b;
    return mul;
}
float divi(float a,float b){
    float quo;
    quo = a/b;
    return quo;
}

int main(){
    float num1,num2,ans;
    int option;
    bool flag = true;
    while (flag){
    cout<<"\n Please Enter the First number: "<<endl;
    cin>>num1;
    cout<<"Please Enter the Second number: "<<endl;
    cin>>num2;
    cout<<"Please Enter the operation number: \n 1 - Addition \n 2 - Subtration \n 3 - Multiplication \n 4 - Division \n 5 - Exit "<<endl;
    cin>>option;

    switch(option){
        case 1:
           ans = add(num1,num2);
           cout << "The addition is: "<<ans<<endl;
           break;
        case 2:
           ans = sub(num1,num2);
           cout << "The difference is: "<<ans<<endl;
           break;
        case 3:
           ans = mult(num1,num2);
           cout << "The product is: "<<ans<<endl;
           break;
        case 4:
           ans = divi(num1,num2);
           cout << "The quotient is: "<<ans<<endl;
           break;
        case 5:
            flag = false;
            break;
        default:
            cout << "Wrong input!! Choose one of the number listed in Menu "<<endl;
            break;  
        }
    }
    return 0;
}