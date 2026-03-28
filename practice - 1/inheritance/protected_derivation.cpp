#include<iostream>
using namespace std;

class BS{
protected:
    int x = 15;
public:
    void showx(){
        cout<<"member of base class: "<<x<<endl;
    }
};

class DR: protected BS{
    int y = 30;
public:
    void showy(){
        cout<<"number of base class in derived: "<<x<<endl;
        cout<<"member of derived class: "<<y;
    }
};

int main(){
    DR d;
    d.showy();
}