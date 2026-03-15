#include<iostream>
using namespace std;

class X{
public:
    X(){
        cout<<"constructor of base class X";
    }

    virtual ~X(){
        cout<<"\ndestructor of base class X";
    }
};

class Y: public X{
public:
    Y(){
        cout<<"\nconstructor of derived class Y";
    }

    ~Y(){
        cout<<"\ndestructor of derived class Y";
    }
};

int main(){
    X *ptr;
    ptr = new Y;
    delete ptr;
}