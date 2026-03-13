#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    void display();   // Function declaration
};

// Function definition outside the class
void Student::display() {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
}

int main() {
    Student s;

    s.name = "Aryan";
    s.age = 20;

    s.display();
}