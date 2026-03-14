#include<iostream>
using namespace std;

class Tax;   // forward declaration

class Account{
private:
    char name[18];
    int acc_no;
    float amount;

public:
    void getData(){
        cout<<"Name: ";
        cin>>name;

        cout<<"Account Number: ";
        cin>>acc_no;

        cout<<"Amount: ";
        cin>>amount;
    }

    friend class Tax;   // friend class declaration
};

class Tax{
public:
    void TDS_Cal(Account ac){
        float tds;
        tds = ac.amount / 10;

        cout<<"TDS of account number "<<ac.acc_no<<" is Rs. "<<tds;
    }
};

int main(){
    Account Acc;
    Tax t;

    Acc.getData();
    t.TDS_Cal(Acc);
}