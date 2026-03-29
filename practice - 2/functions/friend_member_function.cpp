#include<iostream>
using namespace std;

class Y;

class X{
    int x;
public:
    void read_value1(){
        x = 25;
    }   
    void display(Y);
};

class Y{
    int y;
public:
    void read_value2(){
        y = 45;
    }
    friend void X::display(Y);
};

void X::display(Y y){
    cout<<"the value of x is: "<<x<<endl;
    cout<<"the value of y is: "<<y.y<<endl;
}

int main(){
    X x1;
    Y y1;
    x1.read_value1();
    y1.read_value2();
    x1.display(y1);
}