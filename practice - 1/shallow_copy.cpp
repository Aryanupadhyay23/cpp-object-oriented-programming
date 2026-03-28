#include<iostream>
using namespace std;

class Student{
public:
    int *marks;

    Student(int m){
        marks = new int;
        *marks = m;
    }

    // Shallow copy constructor
    Student(const Student &s){
        marks = s.marks;
    }

    void show(){
        cout << *marks << endl;
    }
};

int main(){
    Student s1(90);
    Student s2 = s1;

    *s2.marks = 50;

    s1.show();
    s2.show();
}