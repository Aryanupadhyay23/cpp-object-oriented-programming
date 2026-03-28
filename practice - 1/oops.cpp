#include<iostream>
#include<string>
using namespace std;

class Teacher{
public:
    string name; 
    string dept; 
    string subject;
    double salary;


    void change_dept(string new_dept){
        dept = new_dept;
    }

};

int main(){
    Teacher t1;
    t1.name = "Aryan";
    t1.dept = "computer science";
    t1.subject = "ai/ml";
    t1.salary = 45000;
    cout<<t1.name<<" "<<t1.dept<<" "<<t1.subject<<" "<<t1.salary<<endl;
    t1.change_dept("computer applications");
    cout<<t1.name<<" "<<t1.dept<<" "<<t1.subject<<" "<<t1.salary<<endl;
}
    