#include<iostream>
using namespace std;

class Base{
protected:
    int a;
public:
    void getData(){
        cout<<"Enter value of a: ";
        cin>>a;
    }
};

class Derived : public Base{
    int b;
public:
    void getB(){
        cout<<"Enter value of b: ";
        cin>>b;
    }

    void show(){
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
        cout<<"Sum = "<<a + b<<endl;
    }
};

int main(){
    Derived obj;

    obj.getData();   // function of base class
    obj.getB();      // function of derived class
    obj.show();
}