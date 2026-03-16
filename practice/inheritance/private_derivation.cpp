#include<iostream>
using namespace std;

class BS{
    int x = 15;
public:
    void showx(){
        cout<<"member of base class: "<<x<<endl;
    }
};

class DR:private BS{
    int y = 30;
public:
    void showy(){
        showx();
        cout<<"member of derived class: "<<y;
    }
};

int main(){
    DR d;
    d.showy();
}