#include<iostream>
#include<string>
using namespace std;

// Base class
class Person{
public:
    string name;
    int age;

    // parameterized constructor
    Person(string n, int a){
        name = n;
        age = a;
    }
};

// Derived class
class Student : public Person{
public:
    string subject;
    double salary;

    // constructor of derived class
    Student(string name, int age, string subject, double salary) 
        : Person(name, age)
    {
        this->subject = subject;
        this->salary = salary;
    }

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Subject: "<<subject<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};

int main(){

    Student t1("Aryan",21,"AI/ML",50000);
    t1.display();

}