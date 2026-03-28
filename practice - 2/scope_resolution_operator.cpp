#include<iostream>
using namespace std;

int a = 1;
int main(){
    int a = 2;
    {
        int b = a;
        int a = 3;
        cout<<"in inner block:"<<endl;
        cout<<"b = "<<b<<endl;
        cout<<"a = "<<a<<endl;
        cout<<"::a -> "<<::a<<endl;
    }
}