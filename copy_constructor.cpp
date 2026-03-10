#include<iostream>
#include<string>
using namespace std;

class Teacher{
private:
    double salary;

public:
    string name;
    string dept;
    string subject;

    // parameterized constructor
    Teacher(string n, string d, string s, double sal){
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }

    // copy constructor
    Teacher(Teacher &obj){
        name = obj.name;
        dept = obj.dept;
        subject = obj.subject;
        salary = obj.salary;
    }

    double get_salary(){
        return salary;
    }
};

int main(){

    Teacher t1("Aryan","AI/ML","C++",50000);

    // copy constructor called
    Teacher t2(t1);

    cout<<"Name: "<<t2.name<<endl;
    cout<<"Dept: "<<t2.dept<<endl;
    cout<<"Subject: "<<t2.subject<<endl;
    cout<<"Salary: "<<t2.get_salary()<<endl;
}