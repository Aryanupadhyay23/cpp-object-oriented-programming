#include<iostream>
#include<string>
using namespace std;

class Car{
public:
    string name;
    int price;
    string type;
    int seats;
};

void print(Car c){
    cout<<c.name<<" "<<c.price<<" "<<c.type<<" "<<c.seats<<endl;
};

void change(Car c){
    c.name = "Audi A8";
}

int main(){
    Car c1;
    c1.name = "honda city";
    c1.price = 150000;
    c1.seats = 5;
    c1.type = "sedan";

    Car c2;
    c2.name = "maruti swift";
    c2.price = 70000;
    c2.seats = 4;
    c2.type = "Hatchback";

    Car c3;
    c3.name = "fortuner";
    c3.price = 12000000;
    c3.seats = 8;
    c3.type = "SUV";

    print(c1);
    change(c1);
    print(c1);
}