#include<iostream>
#include<stdexcept>   // for runtime_error
using namespace std;

class Customer{
    string name;
    int balance;

public:
    Customer(string name, int balance){
        this->name = name;
        this->balance = balance;
    }

    void deposit(int amount){
        if(amount <= 0){
            throw runtime_error("Invalid deposit amount");
        }
        balance += amount;
        cout << "Deposit successful. Balance: " << balance << endl;
    }

    void withdraw(int amount){
        if(amount <= 0){
            throw runtime_error("Invalid withdrawal amount");
        }
        if(amount > balance){
            throw runtime_error("Insufficient balance");
        }
        balance -= amount;
        cout << "Withdrawal successful. Balance: " << balance << endl;
    }
};

int main(){
    Customer c("Rohit", 5000);

    try{
        c.deposit(1000);
        c.withdraw(7000);   // will throw exception
    }
    catch(const exception& e){
        cout << "Exception: " << e.what() << endl;
    }
}
