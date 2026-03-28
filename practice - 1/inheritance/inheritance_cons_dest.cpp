#include<iostream>
using namespace std;

class X{
public:
    X(){
        cout<<"constructor of base class X";
    }
    ~X(){
        cout<<"\ndestructor of base class X";
    }
};

class Y{
public:
    Y(){
        cout<<"\nconstructor of base class Y";
    }
    ~Y(){
        cout<<"\ndestructor of base class Y";
    }
};

class Z : public X, public Y{
public:
    Z(){
        cout<<"\nconstructor of derived class Z";
    }
    ~Z(){
        cout<<"\ndestructor of derived class Z";
    }
};

int main(){
    Z obj;
}