#include<iostream>
using namespace std;

class X{
    int a;
public:
    X(){
        a = 5;
    }
    virtual void display(){
        cout<<"a = "<<a;
    }
};

class Y: public X{
    int b;
public:
    Y(){
        b = 15;
        X *x;
        x = this;
        x->display();
    }
    void display(){
        cout<<"b = "<<b<<endl;
    }
};

int main(){
    X x1;
    Y y1;
}
