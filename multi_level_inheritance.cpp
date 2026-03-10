#include<iostream>
#include<string>
using namespace std;

// Base class
class Person{
public:
    string name;
    int age;
};

// Derived class from Person
class Student : public Person{
public:
    string subject;
};

// Derived class from Student
class GraduateStudent : public Student{
public:
    double stipend;

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Subject: "<<subject<<endl;
        cout<<"Stipend: "<<stipend<<endl;
    }
};

int main(){

    GraduateStudent g1;

    g1.name = "Aryan";   // from Person
    g1.age = 21;         // from Person
    g1.subject = "AI/ML"; // from Student
    g1.stipend = 30000;  // from GraduateStudent

    g1.display();
}