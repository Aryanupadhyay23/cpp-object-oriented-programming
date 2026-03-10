#include<iostream>
using namespace std;

class Number{
public:
    int x;

    Number(int a){
        x = a;
    }

    // operator overloading
    Number operator + (Number obj){
        Number temp(0);
        temp.x = x + obj.x;
        return temp;
    }
};

int main(){

    Number n1(10);
    Number n2(20);

    Number n3 = n1 + n2;

    cout << n3.x << endl;

}