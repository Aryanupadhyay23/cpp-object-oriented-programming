#include<iostream>
using namespace std;

class Number{
    private:
        static int C;
    public:
        void count(){
            C++;
            cout<<"C = "<< C << endl;
        }
};

int Number::C = 0;
int main(){
    Number a, b, c;
    a.count();
    b.count();
    c.count();
}