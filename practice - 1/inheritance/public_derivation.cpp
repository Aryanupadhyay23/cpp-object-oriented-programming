#include<iostream>
using namespace std;

class BS{
    int x = 15;
public:
    void showx(){
        cout<<"member of base class: "<<x<<endl;
    }
};

class DR:public BS{
    int y = 30;
public:
    void showy(){
        cout<<"member of derived class: "<<y;
    }
};

int main(){
    DR d;
    d.showx();
    d.showy();
}