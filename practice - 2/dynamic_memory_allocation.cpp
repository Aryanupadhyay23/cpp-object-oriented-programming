#include<iostream>
using namespace std;

class Sum{
public:
    Sum(int a, int b){
        int *sum;
        sum = new int;          // dynamic allocation
        *sum = a + b;

        cout<<"sum of a and b is: "<<*sum;

        delete sum;             // deallocation
    }
};

int main(){
    int a, b;
    cout<<"enter the value of a and b: ";
    cin>>a>>b;

    Sum s1(a, b);
}