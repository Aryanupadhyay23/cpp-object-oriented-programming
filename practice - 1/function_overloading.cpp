#include<iostream>
using namespace std;

int find_area(int, int);
float find_area(double, double);
float find_area(double);

int main(){
    int areaR;
    float areaT;
    float areaC;
    areaR = find_area(5, 15);
    areaT = find_area(5.5, 1.5);
    areaC = find_area(5.3);
    cout<<"area of rectangle is "<<areaR<<endl;
    cout<<"area of triangle is "<<areaT<<endl;
    cout<<"area of circle is "<<areaC<<endl;
}

int find_area(int len, int bh){
    return (len*bh);
}

float find_area(double bs, double ht){
    return (0.5*bs*ht);
}

float find_area(double r){
    return (3.142857*r*r);
}

