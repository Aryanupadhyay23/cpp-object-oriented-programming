#include<iostream>
using namespace std;

class Vehicle{
    char Name[20];
    float Price;
public:
    void get_data();
    void display();
};

void Vehicle::get_data(){
    cout<<"enter the name and price of vehicle: ";
    cin>>Name>>Price;
}
void Vehicle::display(){
    cout<<"name: "<<Name<<endl;
    cout<<"price: "<<Price<<endl;
}

int main(){
    int n, i;
    cout<<"enter the number of vehicles: ";
    cin>>n;

    Vehicle V[n];   // array of objects

    for(i=0; i<n; i++){
        V[i].get_data();
    }

    cout<<"\nDetails of vehicles:\n";
    for(i=0; i<n; i++){
        V[i].display();
        cout<<"\n";
    }
}
