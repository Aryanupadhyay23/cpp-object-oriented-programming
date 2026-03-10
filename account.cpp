#include<iostream>
#include<string>
using namespace std;

class Account{
private:
    double balance;   // private data (encapsulation)

public:
    string name;

    // setter
    void set_balance(double b){
        balance = b;
    }

    // getter
    double get_balance(){
        return balance;
    }
};

int main(){

    Account acc1;

    acc1.name = "Aryan";
    acc1.set_balance(5000);

    cout << "Account Holder: " << acc1.name << endl;
    cout << "Balance: " << acc1.get_balance() << endl;
}