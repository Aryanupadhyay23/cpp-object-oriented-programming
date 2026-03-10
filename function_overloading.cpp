#include<iostream>
#include<string>
using namespace std;

class Student{
public:
    string name;

    // function overloading
    void print(){
        cout<<"No parameter function"<<endl;
    }

    void print(string name){
        cout<<"Student Name: "<<name<<endl;
    }

    void print(string name, int age){
        cout<<"Student Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};

int main(){

    Student s1;

    s1.print();
    s1.print("Aryan");
    s1.print("Aryan",21);

}