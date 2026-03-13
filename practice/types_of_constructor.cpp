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

    // 1. Default Constructor
    Teacher(){
        name = "Unknown";
        dept = "None";
        subject = "None";
        salary = 0;
    }

    // 2. Parameterized Constructor
    Teacher(string n, string d, string s, double sal){
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }

    // 3. Copy Constructor
    Teacher(const Teacher &t){
        name = t.name;
        dept = t.dept;
        subject = t.subject;
        salary = t.salary;
    }

    void print_teacher(){
        cout << name << " " << dept << " " << subject << " " << salary << endl;
    }
};

int main(){

    // Default constructor called
    Teacher t1;
    cout << "Default Constructor Output:" << endl;
    t1.print_teacher();

    // Parameterized constructor called
    Teacher t2("Aryan","Computer Science","AI/ML",80000);
    cout << "\nParameterized Constructor Output:" << endl;
    t2.print_teacher();

    // Copy constructor called
    Teacher t3 = t2;
    cout << "\nCopy Constructor Output:" << endl;
    t3.print_teacher();
}