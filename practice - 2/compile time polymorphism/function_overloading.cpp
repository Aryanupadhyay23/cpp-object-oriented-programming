#include<iostream>
using namespace std;

class Area{
public:
    // Function to find area of square
    int area(int side){
        return side * side;
    }

    // Function to find area of rectangle
    int area(int length, int breadth){
        return length * breadth;
    }
};

int main(){
    Area obj;

    int squareArea = obj.area(5);          // calls square function
    int rectArea = obj.area(4, 6);         // calls rectangle function

    cout<<"Area of square: "<<squareArea<<endl;
    cout<<"Area of rectangle: "<<rectArea<<endl;
}