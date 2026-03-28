#include<iostream>
using namespace std;

class IntegerSum{
    int a, b;
    public:
        IntegerSum(int x, int y){
            a = x;
            b = y;
        }

        IntegerSum(IntegerSum &I){
            a = I.a;
            b = I.b;
        }

        int display(){
            cout<<"Sum : "<<a+b<<endl;
        }
};

int main(){
    IntegerSum Sum1(10,20);
    IntegerSum Sum2(Sum1);
    IntegerSum Sum3 = Sum1;
    Sum1.display();
    Sum2.display();
    Sum3.display();
}