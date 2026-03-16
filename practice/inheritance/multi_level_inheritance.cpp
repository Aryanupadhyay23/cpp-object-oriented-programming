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

class C : public B{
    int c;
public:
    void getC(){
        cout<<"Enter value of c: ";
        cin>>c;
    }

    void show(){
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
        cout<<"c = "<<c<<endl;
        cout<<"Sum = "<<a + b + c<<endl;
    }
};

int main(){
    C obj;

    obj.getA();   // from class A
    obj.getB();   // from class B
    obj.getC();   // from class C
    obj.show();
}