#include<iostream>
using namespace std;

class Debug{
public:
    virtual void show(){
        cout<<"show() function is not defined here"<<endl;
    }
};

class X: public Debug{
    int x;
public:
    X(){
        x = 5;
    }
    void show(){
        cout<<"in class X x = "<<x<<endl;
    }
};

class Y: public Debug{
    int y;
public:
    Y(){
        y = 15;
    }
};

int main(){
    X x1;
    Y y1;
    x1.show();
    y1.show();
}