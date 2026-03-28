#include<iostream>
using namespace std;

class Interest{
    long principal, rate, year;
    float amount;
    public:
        Interest(int p, int t, int r = 5){
            principal = p;
            year = t;
            rate = r;
        }
        void display_amount(){
            cout<<"Principal : "<<principal<<endl;
            cout<<"Rate of interest : "<<rate<<endl;
            cout<<"year : "<<year<<endl;
            amount = (principal*rate*year)/100;
            cout<<"Amount : "<<amount<<endl;
        }
};

int main(){
    Interest I1(5000,3);
    Interest I2(5500, 5, 10);
    I1.display_amount();
    I2.display_amount();
}


