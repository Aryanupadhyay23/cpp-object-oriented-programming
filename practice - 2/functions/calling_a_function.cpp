#include<iostream>
using namespace std;

float volume(float, float, float);
int main(){
    float l, b, h, vol;
    cout<<"Enter the length, breadth, and height of object :\n";
    cin>>l>>b>>h;
    vol = volume(l, b, h);
    cout<<"Volume of object is: "<<vol<<endl;
}

float volume(float x, float y, float z){
    float v;
    v = x*y*z;
    return v;
}