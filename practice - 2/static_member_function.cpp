#include<iostream>
using namespace std;

class Num{
    private:
        static int C;
    public:
        static void count(){
            C++;
        }
        static void display(){
            cout<<"value of C: "<< C << endl;
        }
};

int Num::C = 0;
int main(){
    Num::display();
    Num::count();
    Num::count();
    Num::display();
}