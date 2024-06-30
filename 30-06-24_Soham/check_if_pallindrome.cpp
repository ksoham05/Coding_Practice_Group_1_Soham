#include <iostream>
#include <string>
using namespace std;
//Program to check if a give word or number is a pallindrome

int main(){
    string input;
    string revin;
    int n;
    int i;

    cout << "Give the word/number to be checked to be Pallindrome: ";
    cin >> input;
    n = input.length();

    for (i=n-1; i>=0; i--){
        revin += input[i];
    }
    
    if (input == revin){
        cout << "The Word/Number is a Pallindrome";
    }
    else{
        cout << "The Word/Number is a NOT a Pallindrome";
    }

    return 0;
}