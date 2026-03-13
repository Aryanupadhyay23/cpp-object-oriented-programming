#include<iostream>
using namespace std;

class Student{
public:
    string name;
    int roll_no;
    float gpa;
    int age;
};

int main(){
    Student s1;
    s1.name = "Aryan";
    s1.roll_no=45;
    s1.gpa=7.6;
    cin>>s1.age;
    // s1.age=21;

    Student s2;
    s2.name = "Sahil";
    s2.roll_no=25;
    s2.gpa=8.6;
    s2.age=22;

    cout<<s1.name<<" "<<s1.age<<endl;
    cout<<s2.name<<" "<<s2.age<<endl;
}