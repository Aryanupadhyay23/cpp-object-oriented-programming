#include<iostream>
using namespace std;

class IntegerSum{
    int a, b;
    public:
        IntegerSum();
        int display();
};

IntegerSum::IntegerSum(){
    a = 5;
    b = 10;
}

int IntegerSum::display(){
    return a+b;
}

int main(){
    IntegerSum Sum1;
    cout<<"Sum : "<<Sum1.display();
}