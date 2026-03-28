#include<iostream>
using namespace std;

class Circle{
    double radius;
    public:
        Circle(){
            radius = 0;
        }

        Circle(double r){
            radius = r;
        }

        Circle(Circle &c2){
            radius = c2.radius;
        }

        double show_area(){
            return radius*radius*3.1416;
        }
};

int main(){
    Circle c1, c2(3.5);
    Circle c3(c2);
    Circle c4=c2;
    cout<<"area = "<<c1.show_area()<<endl;
    cout<<"area = "<<c2.show_area()<<endl;
    cout<<"area = "<<c3.show_area()<<endl;
    cout<<"area = "<<c4.show_area()<<endl;
}