#include<iostream>
using namespace std;

class Account{
    char name[20];
    int acc_no;
    float balance;
public:
    void get_data(){
        cout<<"enter the name, account number and balance: ";
        cin>>name>>acc_no>>balance;
    }
    friend void TDS_cal(Account);
};

void TDS_cal(Account ac){
    float tds;
    tds = ac.balance * 0.1;
    cout<<"the TDS amount is: "<<tds;
}

int main(){
    Account Acc;
    Acc.get_data();
    TDS_cal(Acc);
}