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
        ~Circle(){
            cout<<"\nobject destroyed";
        }
        double showArea(){
            return radius*radius*3.1416;
        }
};

int main(){
    Circle c1, c2(3.5);
    cout<<"area = "<<c2.showArea();
}
