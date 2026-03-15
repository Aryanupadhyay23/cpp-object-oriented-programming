#include<iostream>
using namespace std;

class Circle{
private:
    double radius;
    double area;

public:
    Circle(){
        cout<<"\nConstructor";
        area = 0;
        radius = 5.6;
    }

    ~Circle(){
        cout<<"\nDestructor";
    }

    void showArea(){
        area = radius * radius * 3.1416;
        cout<<"\nArea = "<<area;
    }
};

int main(){
    Circle *C;
    C = new Circle;     // dynamic object creation
    C->showArea();      // accessing member function using pointer
    delete C;           // destructor will be called
}