#include<iostream>
using namespace std;

// Abstract class
class Shape{
public:
    virtual void area() = 0;   // pure virtual function
};

// Derived class
class Rectangle : public Shape{
public:
    int length = 10;
    int width = 5;

    void area(){
        cout<<"Rectangle Area: "<<length * width<<endl;
    }
};

// Another derived class
class Circle : public Shape{
public:
    int radius = 7;

    void area(){
        cout<<"Circle Area: "<<3.14 * radius * radius<<endl;
    }
};

int main(){

    Rectangle r;
    Circle c;

    r.area();
    c.area();

}