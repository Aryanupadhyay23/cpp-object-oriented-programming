#include<iostream>
using namespace std;

float multiply(float, float);
int main(){
    float x, y, z;
    cout<<"Enter the numbers:\n";
    cin>>x>>y;
    z=multiply(x, y);
    cout<<"Multiplication of two numbers is : "<<z<<endl;
}

float multiply(float a, float b){
    return a*b;
}
