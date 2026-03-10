#include<iostream>
#include<string>
using namespace std;

class Teacher{
public:
    string name;
    int *salary;

    // constructor
    Teacher(string n, int s){
        name = n;
        salary = new int;
        *salary = s;
    }

    // destructor
    ~Teacher(){
        cout << "Destructor called, memory released" << endl;
        delete salary;
    }

    void display(){
        cout << "Name: " << name << endl;
        cout << "Salary: " << *salary << endl;
    }
};

int main(){

    Teacher t1("Aryan",50000);
    t1.display();
}