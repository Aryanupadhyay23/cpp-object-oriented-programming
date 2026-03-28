#include<iostream>
using namespace std;

class A{
protected:
    int a;
public:
    void getA(){
        cout<<"Enter value of a: ";
        cin>>a;
    }
};

class B{
protected:
    int b;
public:
    void getB(){
        cout<<"Enter value of b: ";
        cin>>b;
    }
};

class C : public A, public B{
public:
    void show(){
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
        cout<<"Sum = "<<a + b<<endl;
    }
};

int main(){
    C obj;

    obj.getA();   // from class A
    obj.getB();   // from class B
    obj.show();   // from class C
}