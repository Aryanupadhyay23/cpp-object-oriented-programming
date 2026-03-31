#include<iostream>
using namespace std;

class Animal{
public:
    virtual void sound(){     // virtual function
        cout<<"Animal makes a sound"<<endl;
    }   
};

class Dog : public Animal{
public:
    void sound(){     // overriding virtual function
        cout<<"Dog barks"<<endl;
    }
};

class Cat : public Animal{
public:
    void sound(){     // overriding virtual function
        cout<<"Cat meows"<<endl;
    }
};

int main(){
    Animal *a1;   // base class pointer

    Dog d1;
    Cat c1;

    a1 = &d1;     // pointing to Dog object
    a1->sound();  // calls Dog's sound()

    a1 = &c1;     // pointing to Cat object
    a1->sound();  // calls Cat's sound()

}
