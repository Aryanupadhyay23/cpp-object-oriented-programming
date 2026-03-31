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
        if(amount <= 0){
            throw 1;  // int exception
        }
        balance += amount;
        cout << "Deposit successful. Current balance: " << balance << endl;
    }

    void withdraw(int amount){
        if(amount <= 0){
            throw 2;  // int exception (different code)
        }
        if(amount > balance){
            throw string("Insufficient balance");  // string exception
        }
        balance -= amount;
        cout << "Withdrawal successful. Current balance: " << balance << endl;
    }
};

int main(){
    Customer C1("Rohit", 5000, 10);

    try{
        C1.deposit(1000);
        C1.withdraw(50000);   // will throw string exception
    }

    catch(int errorCode){
        if(errorCode == 1)
            cout << "Exception: Invalid deposit amount" << endl;
        else if(errorCode == 2)
            cout << "Exception: Invalid withdrawal amount" << endl;
    }

    catch(const string& msg){
        cout << "Exception: " << msg << endl;
    }

    catch(...){
        cout << "Unknown exception occurred" << endl;
    }
}