#include<iostream>
using namespace std;

class Base{
    int a;
public: 
    Base(){
        a = 20;
    }
    void show(){
        cout<<"a = "<<a<<endl;
    }
};

class Derived:public Base{
    int b;
public:
    Derived(){
        b = 25;
    }
    void show(){
        cout<<"b = "<<b<<endl;
    }
};

int main(){
    Derived D;
    D.Base::show();
    D.show();
}