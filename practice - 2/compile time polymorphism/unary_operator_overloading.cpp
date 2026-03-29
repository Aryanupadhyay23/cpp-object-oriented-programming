#include<iostream>
using namespace std;

class Unaryop{
    int a;
public:
    void read_data(int x){
        a = x;
    }

    void operator - (){
        a = -a;
    }

    void display(){
        cout<<"the value of x is: "<<a;
    }
};

int main(){
    Unaryop u1;
    int num;
    cout<<"enter the value of x: ";
    cin>>num;

    u1.read_data(num);
    -u1;        // using overloaded unary operator

    u1.display();
}