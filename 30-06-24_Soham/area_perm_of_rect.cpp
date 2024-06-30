#include <iostream>
using namespace std;
//Write a program in C++ to define a function to Calculate area,perimeter of rectangle given length and breadth

void rect_details(float l, float b, float & area, float & per){
    
    area = l*b;
    per = (2*l + 2*b);
}

int main(){
    float l;
    float b;
    float area,per;
    cout << "Give the Length and Breadth of Rectangle: ";
    cin >>l;
    cin >>b;

    rect_details(l, b, area, per);
    cout<<"The Area of rectangle is : "<<area<<endl;
    cout<<"The Perimeter of rectangle is : "<<per;
    return 0;
}