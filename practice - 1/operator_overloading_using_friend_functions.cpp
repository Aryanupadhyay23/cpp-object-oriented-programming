#include<iostream>
using namespace std;

class Box{
private:
    double length;
    double breadth;
    double height;
public:
    double Volume(){
        return length*breadth*height;
    }
    void setDimensions(double ln, double bh, double ht){
        length = ln;
        breadth = bh;
        height = ht;
    }
    friend Box operator+(Box, Box);
};

Box operator+(Box b1, Box b2){
    Box box;
    box.length = b1.length+b2.length;
    box.breadth = b1.breadth+b2.breadth;
    box.height = b1.height+b2.height;
    return box; 
}

int main(){
    Box Box1;
    Box Box2;
    Box Box3;
    double volume = 0.0;
    Box1.setDimensions(4.0,6.0,8.0);
    Box2.setDimensions(5.0,7.0,9.0);
    volume = Box1.Volume();
    cout<<"Volume of Box1: "<< volume<<endl;
    volume = Box2.Volume();
    cout<<"Volume of Box2: "<<volume<<endl;
    Box3 = Box1 + Box2;
    volume = Box3.Volume();
    cout<<"Volume of Box3: "<<volume<<endl;
}