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

    // Non-parameterized constructor
    Teacher(){
        dept = "Computer Science";
    }

    // Parameterized constructor
    Teacher(string name, string dept, string subject, double salary){
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
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

    // Using non-parameterized constructor
    Teacher t1;
    t1.name = "Aryan";
    t1.subject = "Python";
    t1.set_salary(10000);

    cout<<"Name: "<<t1.name<<endl;
    cout<<"Dept: "<<t1.dept<<endl;
    cout<<"Salary: "<<t1.get_salary()<<endl;

    cout<<endl;

    // Using parameterized constructor
    Teacher t2("Rahul","AI/ML","C++",50000);

    cout<<"Name: "<<t2.name<<endl;
    cout<<"Dept: "<<t2.dept<<endl;
    cout<<"Subject: "<<t2.subject<<endl;
    cout<<"Salary: "<<t2.get_salary()<<endl;
}