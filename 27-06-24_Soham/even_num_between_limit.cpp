#include <iostream>
using namespace std;
// Print all even numbers with in given limits

int main(){
    int i;
    int num1;
    int num2;

    cout<<"Give the starting point"<<endl;
    cin>>num1;
    cout<<"Give endpoint"<<endl;
    cin>>num2;

    printf("The even numbers between %d and %d are :",num1,num2);
    for (i=num1+1; i<num2; i++){
        if (i%2 == 0){
            cout<<i<<" ";
        }
    }
    return 0;
}