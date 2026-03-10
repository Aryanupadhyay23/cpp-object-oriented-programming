#include<iostream>
#include<string>
using namespace std;

class Teacher{
private:
    double salary;

public:
    // non-parameterized
    Teacher(){
        dept = "computer science";
    }

    string name;
    string dept;
    string subject;

    void change_dept(string new_dept){
        dept = new_dept;
    }

    void set_salary(int s){
        salary = s;
    }

    double get_salary(){
        return salary;
    }

};

int main(){
    Teacher t1;  // constructor call
    t1.name = "Aryan";
    t1.subject = "python";
    t1.set_salary(10000);
    cout<<t1.get_salary()<<endl;

    cout<<t1.name<<endl;
    cout<<t1.dept<<endl;
    t1.change_dept("AI/ML");
    cout<<t1.dept<<endl;
    return 0;
}