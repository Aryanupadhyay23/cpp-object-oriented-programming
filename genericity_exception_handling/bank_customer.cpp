#include<iostream>
using namespace std;

class Customer{
    string name;
    int balance, account_number;

public:

    Customer(string name, int balance, int account_number){
        this->name = name;
        this->balance = balance;
        this->account_number = account_number;
    }

    void deposit(int amount){
        if(amount > 0){
            balance += amount;
            cout<<"Rs."<<amount<<" credited successfully\n";
        }
        else{
            throw "Amount should be greater than zero";
        }
    }

    void withdraw(int amount){
        if(amount > 0 && amount <= balance){
            balance -= amount;
            cout<<"Rs."<<amount<<" debited successfully\n";
        }
        else if(amount < 0){
            throw "Amount should be greater than zero";
        }
        else{
            throw "Low balance";
        }
    }
};

int main(){

    Customer C1("Aryan", 5000, 10);

    try{
        C1.deposit(100);
        C1.withdraw(6000);
    }

    catch(const char* msg){
        cout<<"Exception: "<<msg<<endl;
    }
}