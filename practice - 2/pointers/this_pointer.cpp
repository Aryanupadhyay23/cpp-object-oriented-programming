#include<iostream>
using namespace std;

class Student{
    int marks;

public:
    // Constructor with same parameter name
    Student(int marks){
        this->marks = marks;   // 'this' refers to current object
    }

    // Function to return current object
    Student& updateMarks(int marks){
        this->marks = marks;
        return *this;   // returning current object
    }

    void display(){
        cout<<"Marks: "<<marks<<endl;
    }
};

int main(){
    Student s1(50);

    s1.display();

    s1.updateMarks(80).display();  // method chaining using this
}

