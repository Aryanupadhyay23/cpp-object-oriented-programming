#include<iostream>
using namespace std;

class Base{
protected:
    int a;
public: 
    Base(){
        a = 20;
    }
    virtual void show() = 0;
};

class Derived:public Base{
    int b;
public:
    Derived(){
        b = 25;
    }
    void show(){
        cout<<"a = "<<a<<endl<<"b = "<<b;
    }
};

int main(){
    Base *ptr;
    Derived D;
    ptr = &D;
    ptr->show();
}