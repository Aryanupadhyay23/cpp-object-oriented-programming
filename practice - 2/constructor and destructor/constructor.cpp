#include<iostream>
using namespace std;

class Number{
    int P, Q, R;
    public:
        Number(){
            P = 10;
            Q = 20;
            R = 30;
        }
        void display(){
            cout<<P<<" "<<Q<<" "<<R<<endl;
        }
};

int main(){
    Number X;
    X.display();
}