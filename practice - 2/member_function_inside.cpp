#include<iostream>
using namespace std;

class Circle{
    private:
        double radius;
    public:
        double get_radius(){
            radius = 1.5;
        }

        double show_area(){
            return radius*radius*3.1416;
        }
};

int main(){
    Circle C1;
    C1.get_radius();
    cout<<"area : "<<C1.show_area();
}