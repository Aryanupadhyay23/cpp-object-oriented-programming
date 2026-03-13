#include<iostream>
#include<string>
using namespace std;

class Car{
public:
    string name;
    int price;
    string type;
    int seats;

    Car(){

    }

    Car(string n, int p, string t){
        name = n;
        price = p;
        type = t;
    }

    Car(string n, int p, string t, int s){
        name = n;
        price = p;
        type = t;
        seats = s;
    }

};

void print(Car c){
    cout<<c.name<<" "<<c.type<<" "<<c.price<<" "<<c.seats<<endl;
}

int main(){
    Car c1("honda city",150000,"sedan");
    c1.seats = 5;
    c1.price = 700000;
    // Car c2("maruti swift",70000,"Hatchback", 4);
    Car c2;
    c2.name = "maruti swift";
    c2.price = 70000;
    c2.type = "Hatchback";
    c2.seats = 4;
    Car c3("fortuner",12000000,"SUV", 8);
    print(c1);
    print(c2);
    print(c3);

}