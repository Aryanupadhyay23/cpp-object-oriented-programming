#include<iostream>
#include<string>
using namespace std;

class Teacher{
public:
    string name;
    int *salary;

    // constructor
    Teacher(string n, int s){
        name = n;
        salary = new int;
        *salary = s;
    }

    // shallow copy constructor
    Teacher(Teacher &obj){
        name = obj.name;
        salary = obj.salary;   // same memory address copied
    }
};

int main(){

    Teacher t1("Aryan",50000);

    Teacher t2(t1);   // shallow copy

    *t2.salary = 70000;

    cout<<"t1 salary: "<<*t1.salary<<endl;
    cout<<"t2 salary: "<<*t2.salary<<endl;

}