#include<iostream>
using namespace std;

class Shape{
protected:
    double ln, bd;
public:
    void get_data(double x, double y){
        ln = x;
        bd = y;
    }
    virtual void show_area(){

    }
};

class Rectangle:public Shape{
public:
    void show_area(){
        cout<<"area of rectangle: "<<ln*bd<<endl;
    }
};

class Triangle:public Shape{
public:
    void show_area(){
        cout<<"Area of triangle: "<<0.5*ln*bd<<endl;
    }
};


int main(){
    Rectangle R;
    R.get_data(5.6,7.5);
    Triangle T;
    T.get_data(5.0,9.5);
    Shape *area[2];
    area[0]=&R;
    area[1]=&T;
    area[0]->show_area();
    area[1]->show_area();
}