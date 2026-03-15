#include<iostream>
using namespace std;

class Student{
private:
    int roll;
    float marks;

public:
    void getData(){
        cout<<"Enter Roll Number: ";
        cin>>roll;

        cout<<"Enter Marks: ";
        cin>>marks;
    }

    void display(){
        cout<<"Roll: "<<roll<<"  Marks: "<<marks<<endl;
    }
};

void show(Student s[], int n){
    cout<<"\nStudent Details:\n";
    for(int i=0;i<n;i++){
        s[i].display();
    }
}

int main(){
    Student s[3];

    cout<<"Enter details of students\n";
    for(int i=0;i<3;i++){
        cout<<"\nStudent "<<i+1<<endl;
        s[i].getData();
    }

    show(s,3);   // passing array of objects
}