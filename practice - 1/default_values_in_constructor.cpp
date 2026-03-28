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

    // Default constructor
    Teacher(){
        dept = "computer science";
    }

    // Parameterized constructor
    Teacher(string n, string d, string s, double sal){
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }

    void change_dept(string new_dept){
        dept = new_dept;
    }

    void print_teacher(){
        cout << name << " " << dept << " " << subject << " " << salary << endl;
    }

    double get_salary(){
        return salary;
    }

    void set_salary(double sal){
        salary = sal;
    }
};

int main(){

    Teacher t1;

    t1.name = "Aryan";
    t1.subject = "AI/ML";

    t1.set_salary(80000);

    cout << "Salary: " << t1.get_salary() << endl;

    t1.print_teacher();

    t1.change_dept("Computer Applications");

    t1.print_teacher();

    Teacher t2("Rahul","Maths","Electrical",55000);

    t2.print_teacher();
}