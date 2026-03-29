#include<iostream>
using namespace std;

class Number{
    int value;

public:
    // Constructor
    Number(int v){
        value = v;
    }

    // Overloading + operator
    Number operator + (Number obj){
        return Number(value + obj.value);
    }

    void display(){
        cout<<"Value: "<<value<<endl;
    }
};

int main(){
    Number n1(10), n2(20);

    Number n3 = n1 + n2;   // binary operator

    n3.display();
}
