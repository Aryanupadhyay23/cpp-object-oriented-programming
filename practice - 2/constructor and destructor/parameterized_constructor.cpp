#include<iostream>
using namespace std;

class IntegerSum{
    int a, b;
    public:
        IntegerSum(int x, int y=0){
            a = x;
            b = y;
        }
        int display(){
            cout<<"Sum : "<<a+b<<endl;
        }
};

int main(){
    IntegerSum Sum1(10);
    IntegerSum Sum2 = IntegerSum(20,20);
    Sum1.display();
    Sum2.display();
}