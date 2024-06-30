#include <iostream>
#include <cmath>
using namespace std;

//Write a Function in C++ to Calculate Area, Circumference of a circle given its radius
void circle_details(float r, float & area, float & circ){
    area = M_PI*pow(r,2);
    circ = 2*M_PI*r;
}
int main(){
    float r;
    float area=0,circ=0;
    cout << "Give the Radius of the Circle: ";
    cin >> r;
    circle_details(r,area,circ);
    cout << "The Area of the Circle is : "<<area<<endl;
    cout <<"The Circumference of the Circle is "<<circ;
    return 0;
}