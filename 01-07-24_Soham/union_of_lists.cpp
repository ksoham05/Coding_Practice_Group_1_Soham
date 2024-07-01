#include <iostream>
using namespace std;
// Write a program in C++ to take two list of 10 numbers from user and give the UNION of the two lists.
int main(){
    int i;
    int list1[10];
    int list2[10];
    int unionlist[20];
    int unionsize=0;
    int num;
    cout << "Enter the numbers in First List: "<<endl;

    for(i=0; i<10; i++){
        cin>>num;
        list1[i] = num;
    }
    cout << "Enter the numbers in Second List: "<<endl;

    for(i=0; i<10; i++){
        cin>>num;
        list1[i] = num;
    }

    for(int i = 0; i < 10; i++) {
        unionlist[unionsize] = list1[i];
        unionsize+=1;
    }

    for(int i = 0; i < 10; i++) {
        bool isPresent = false;
        for(int j = 0; j < unionsize; j++) {
            if(list2[i] == unionlist[j]) {
                isPresent = true;
                break;
            }
        }
        if(!isPresent) {
            unionlist[unionsize++] = list2[i];
        }
    }

    cout << "Union of the two lists: ";
    for(int i = 0; i < unionsize; i++) {
        cout << unionlist[i] << " ";
    }
    cout << endl;

    return 0;
}
