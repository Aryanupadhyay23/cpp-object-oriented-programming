#include<iostream>
using namespace std;

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
    friend void TDS_Cal(Account);
};

void TDS_Cal(Account ac){
    float tds;
    tds = ac.amount/10;
    cout<<"Tds of account number : "<<ac.acc_no<<" is Rs."<<tds;
}

int main(){
    Account Acc;
    Acc.getData();
    TDS_Cal(Acc);
}