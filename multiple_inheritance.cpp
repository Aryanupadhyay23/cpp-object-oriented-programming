#include<iostream>
#include<string>
using namespace std;

// First base class
class Person{
public:
    string name;
    int age;
};

// Second base class
class Employee{
public:
    double salary;
};

// Derived class inheriting from two classes
class Teacher : public Person, public Employee{
public:
    string subject;

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Subject: "<<subject<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};

int main(){

    Teacher t1;

    t1.name = "Aryan";   // from Person
    t1.age = 21;         // from Person
    t1.subject = "AI/ML";
    t1.salary = 50000;   // from Employee

    t1.display();
}