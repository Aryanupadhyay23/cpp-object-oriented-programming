#include<iostream>
using namespace std;

class Student{
    int *marks;

public:
    Student(){
        marks = new int;
        *marks = 90;
        cout << "Memory allocated" << endl;
    }

    ~Student(){
        delete marks;
        cout << "Memory released" << endl;
    }
};

int main(){
    Student s1;
}