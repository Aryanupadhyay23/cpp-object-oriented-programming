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

    void change_dept(string new_dept){
        dept = new_dept;
    }

    void set_salary(double s){
        salary = s;
    }

    double get_salary(){
        return salary;
    }
};

int main(){
    Teacher t1("Aryan","AI/ML","C++",50000);  // constructor call

    cout << "Name: " << t1.name << endl;
    cout << "Department: " << t1.dept << endl;
    cout << "Subject: " << t1.subject << endl;
    cout << "Salary: " << t1.get_salary() << endl;
}