#include<iostream>
#include<string>
using namespace std;

class Teacher{
public:
    string name; 
    string dept; 
    string subject;
    double salary;

    Teacher(){

    };
    
    Teacher(string n, string d, string s, double sal){
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    };

    void change_dept(string new_dept){
        dept = new_dept;
    }

    void print_teacher(){
        cout << name << " " << dept << " " << subject << " " << salary << endl;
    }
};

int main(){
    Teacher t1;

    t1.name = "Aryan";
    t1.dept = "Computer Science";
    t1.subject = "AI/ML";
    t1.salary = 45000;

    t1.print_teacher();

    t1.change_dept("Computer Applications");

    t1.print_teacher();

    Teacher t2("Rahul","Maths","Electrical",55000);
    t2.print_teacher();
}

