#include<iostream>
using namespace std;

// Base class
class Animal{
public:
    void sound(){
        cout<<"Animal makes sound"<<endl;
    }
};

// Derived class
class Dog : public Animal{
public:
    void sound(){
        cout<<"Dog barks"<<endl;
    }
};

int main(){

    Dog d1;
    d1.sound();

}