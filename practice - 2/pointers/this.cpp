#include<iostream>
#include<cstring>
using namespace std;

class Student{
    char name[20];
    float marks;
public:
    Student(char *s, float m){
        strcpy(name, s);
        marks = m;
    }

    Student& greater(Student &x){
        if(x.marks >= marks){
            return x;          // return object with greater marks
        }
        else{
            return *this;
        }
    }

    void display(){
        cout<<"name: "<<name<<endl;
        cout<<"marks: "<<marks<<endl;
    }
};

int main(){
    Student S1((char*)"Aryan", 67), S2((char*)"Rohan", 78);

    Student S3 = S1.greater(S2);

    cout<<"the student with greater marks is:"<<endl;
    S3.display();
}