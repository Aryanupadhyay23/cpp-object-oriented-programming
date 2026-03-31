#include<iostream>
using namespace std;

class Customer{
    string name;
    int balance, account_number;

public:
    // Constructor
    Customer(string name, int balance, int account_number){
        this->name = name;
        this->balance = balance;
        this->account_number = account_number;
    }

    // Deposit function
    void deposit(int amount){
        if(amount > 0){
            balance += amount;
            cout << "Deposit successful. Current balance: " << balance << endl;
        }
        else{
            throw string("Invalid deposit amount");
        }
    }

    // Withdraw function
    void withdraw(int amount){
        if(amount > 0 && amount <= balance){
            balance -= amount;
            cout << "Withdrawal successful. Current balance: " << balance << endl;
        }
        else{
            throw string("Invalid withdrawal amount or insufficient balance");
        }
    }
};

int main(){
    Customer C1("Rohit", 5000, 10);

    try{
        C1.deposit(1000);     // Works fine
        C1.withdraw(50000);   // Will throw exception
    }
    catch(string& msg){
        cout << "Exception occurred: " << msg << endl;
    }
}