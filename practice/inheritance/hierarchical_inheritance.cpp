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
public:
    void showB(){
        cout<<"Value of a in class B = "<<a<<endl;
    }
};

class C : public A{
public:
    void showC(){
        cout<<"Value of a in class C = "<<a<<endl;
    }
};

int main(){
    B obj1;
    C obj2;

    obj1.getA();
    obj1.showB();

    obj2.getA();
    obj2.showC();
}