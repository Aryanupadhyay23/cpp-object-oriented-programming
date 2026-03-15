#include<iostream>
using namespace std;

class Employee{
    int emp_id;
    float salary;
public: 
    void get_data(int e, float s){
        emp_id = e;
        salary = s;
    }
    void show_data(){
        cout<<"Employee id: "<<emp_id<<endl;
        cout<<"salary : Rs."<<salary<<endl;
    }
};

int main(){
    Employee E;
    Employee *Etr = &E;
    Etr->get_data(234, 20000);
    Etr->show_data();
}