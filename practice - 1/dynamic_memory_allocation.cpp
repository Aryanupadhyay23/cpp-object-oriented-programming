#include<iostream>
using namespace std;

int main(){
    int *p;
    p = new int;

    *p = 123;
    cout<<"At address "<<p<<" the value is "<<*p;
    delete p;
}