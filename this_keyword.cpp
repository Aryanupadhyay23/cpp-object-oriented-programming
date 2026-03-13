#include<iostream>
using namespace std;

class Cricketer{
public:
    string name;
    int runs;
    float avg;

    Cricketer(string name, int runs, float avg){
        this->name = name;
        this->runs = runs;
        this->avg = avg;
    }

    void print(int runs){
        cout<<this->name<<" "<<this->runs<<" "<<this->avg<<endl;
        cout<<runs<<endl;
    }

    int matches(){
        return runs/avg;
    }
};

int main(){
    Cricketer c1("virat kohli", 25000, 55.2);
    Cricketer c2("Rohit Sharma", 18000, 47.8);
    // c1.name = "Sachin";
    c1.print(50);
    c2.print(70);
    cout<<c1.matches()<<endl;
    cout<<c2.matches()<<endl;
}