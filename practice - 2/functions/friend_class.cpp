#include<iostream>
using namespace std;

class B;   // forward declaration

class A{
    int x;
public:
    A(){
        x = 10;
    }

    // Declare class B as friend
    friend class B;
};

class B{
public:
    void display(A obj){
        // Accessing private member of class A
        cout << "Value of x is: " << obj.x;
    }
};

int main(){
    A a1;
    B b1;

    b1.display(a1);
}