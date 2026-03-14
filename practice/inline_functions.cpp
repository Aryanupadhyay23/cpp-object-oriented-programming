#include<iostream>
using namespace std;

class Circle{
private:
    double radius;

public:
    void getRadius();
    double showArea();
};

inline void Circle::getRadius(){
    radius = 1.5;
}

inline double Circle::showArea(){
    return radius * radius * 3.1416;
}

int main(){
    Circle c1;
    c1.getRadius();
    cout << "Area of circle = " << c1.showArea();
}