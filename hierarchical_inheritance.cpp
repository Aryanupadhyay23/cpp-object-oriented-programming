#include<iostream>
#include<string>
using namespace std;

// Base class
class Person{
public:
    string name;
    int age;
};

// First derived class
class Student : public Person{
public:
    string subject;

    void display_student(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Subject: "<<subject<<endl;
    }
};

// Second derived class
class Teacher : public Person{
public:
    double salary;

    void display_teacher(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};

int main(){

    Student s1;
    s1.name = "Aryan";
    s1.age = 21;
    s1.subject = "AI/ML";

    Teacher t1;
    t1.name = "Rahul";
    t1.age = 35;
    t1.salary = 50000;

    s1.display_student();
    cout<<endl;
    t1.display_teacher();

}