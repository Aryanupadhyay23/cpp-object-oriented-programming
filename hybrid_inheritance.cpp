#include<iostream>
#include<string>
using namespace std;

// Base class
class Person{
public:
    string name;
    int age;
};

// Derived from Person (multilevel start)
class Student : public Person{
public:
    string subject;
};

// Derived from Student
class Graduate : public Student{
public:
    string degree;
};

// Another base class
class Employee{
public:
    double salary;
};

// Hybrid inheritance
class TeachingAssistant : public Graduate, public Employee{
public:
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Subject: "<<subject<<endl;
        cout<<"Degree: "<<degree<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};

int main(){

    TeachingAssistant t1;

    t1.name = "Aryan";
    t1.age = 21;
    t1.subject = "AI/ML";
    t1.degree = "MCA";
    t1.salary = 40000;

    t1.display();
}