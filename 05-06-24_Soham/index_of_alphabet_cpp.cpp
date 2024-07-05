#include <iostream>
using namespace std;

int main(){
    char alpha[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char ch;
    int i,index =0;

    cout<<"Give the Alphabet whose index is to be found:(Give in Capital): ";
    cin>>ch;
    for (i=0; i<26; i++){
        if (ch == alpha[i]){
            index = i+1;
        }
    }

    cout<<"The given Alphabet occurs at index: "<<index;
    return 0;
}