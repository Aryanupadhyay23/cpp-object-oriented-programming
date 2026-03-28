#include<iostream>
using namespace std;

class Circle{
    private:
        double radius;
    public:
        void get_radius();
        double show_area();
};

void Circle :: get_radius(){
    radius = 1.5;
}

double Circle :: show_area(){
    return radius*radius*3.1416;
}

int main(){
    Circle C1;
    C1.get_radius();
    cout<<"area : "<<C1.show_area();
}
