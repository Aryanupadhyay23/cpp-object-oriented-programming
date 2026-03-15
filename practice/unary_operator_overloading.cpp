#include<iostream>
using namespace std;

class Unaryop{
    int a;
    int b;
    int c;
public: 
    void read_data(int x, int y , int z){
        a = x;
        b = y;
        c = z;
    }
    void show(){
        cout<<a<<" ";
        cout<<b<<" ";
        cout<<c<<" ";
    }
    void operator-();
};


void Unaryop::operator-(){
    a = -a;
    b = -b;
    c = -c;
}

int main(){
    Unaryop U;
    U.read_data(5,-15,25);
    cout<<"Before:";
    U.show();
    -U;
    cout<<"\nafter:";
    U.show();
}