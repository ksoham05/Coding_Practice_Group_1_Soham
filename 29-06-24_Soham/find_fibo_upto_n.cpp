#include <iostream>
using namespace std;
//Find Fibonacci series upto given number

int main(){
    int temp;
    int n;
    int num1,num2;
    int count=0;

    cout << "Give the number upto which Fibonacci series is to be found";
    cin >> n;
    num1 = 0;
    num2 = 1;
    cout << "The Fibonacci series is: "<<endl;
    cout<<num1<<" "<<num2<<" ";
    count+=2;
    while (count < n){
    temp = num2;
    num2 = num1+num2;
    cout<<num2<<" ";
    num1 = temp; 
    count +=1;
    }
     return 0;
}
 