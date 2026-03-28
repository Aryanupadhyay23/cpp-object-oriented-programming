#include<iostream>
using namespace std;

class Student{
    char Name[20];
    public:
        void getName(){
            cout<<"enter name of student : ";
            cin>>Name;
        }
        void showName(){
            cout<<"Name : "<<Name<<endl;
        }
    class Test{
        int marks;
        public:
            void getMarks(int a){
                marks = a;
            }
            void showMarks(){
                cout<<"Marks : "<<marks;
            }
    };
};

int main(){
    Student S;
    Student::Test T;
    S.getName();
    T.getMarks(99);
    S.showName();
    T.showMarks();
}