#include<iostream>
#include<string>
using namespace std;

class Student{
public:
    string name;
    int roll;
    string course;
    int age;

    Student(){

    }

    Student(string n, int r, string c){
        name = n;
        roll = r;
        course = c;
    }

    Student(string n, int r, string c, int a){
        name = n;
        roll = r;
        course = c;
        age = a;
    }

};

void print(Student s){
    cout << s.name << " " << s.course << " " << s.roll << " " << s.age << endl;
}

int main(){

    Student s1("Aryan",101,"BCA");
    s1.age = 21;
    s1.roll = 101;

    Student s2;
    s2.name = "Rahul";
    s2.roll = 102;
    s2.course = "BCA";
    s2.age = 20;

    Student s3("Aman",103,"BCA",22);
    Student s4 = s1; // Deep copy
    s4.name = "manish";

    Student s5(s1); // Copy constructor 
    s5.name = "vijay"; // Deep copy

    print(s1);
    print(s2);
    print(s3);
    print(s4);
    print(s5);

}