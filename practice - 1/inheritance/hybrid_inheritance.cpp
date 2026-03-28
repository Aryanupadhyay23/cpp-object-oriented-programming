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

class B : public A{
protected:
    int b;
public:
    void getB(){
        cout<<"Enter value of b: ";
        cin>>b;
    }
};

class C : public A{
protected:
    int c;
public:
    void getC(){
        cout<<"Enter value of c: ";
        cin>>c;
    }
};

class D : public B, public C{
public:
    void show(){
        cout<<"a from B side = "<<B::a<<endl;
        cout<<"a from C side = "<<C::a<<endl;
        cout<<"b = "<<b<<endl;
        cout<<"c = "<<c<<endl;
    }
};

int main(){
    D obj;

    obj.B::getA();
    obj.getB();
    obj.C::getA();
    obj.getC();

    obj.show();
}