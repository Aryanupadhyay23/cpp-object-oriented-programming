#include<iostream>
using namespace std;

class Exception{
protected:
    string msg;

public:
    Exception(string msg){
        this->msg = msg;
    }

    string what(){
        return msg;
    }
};

int main(){

    int balance = 5000;
    int withdraw;

    cout<<"Enter amount to withdraw: ";
    cin>>withdraw;

    try{
        if(withdraw > balance){
            throw Exception("Insufficient balance");
        }

        balance -= withdraw;
        cout<<"Withdrawal successful\n";
        cout<<"Remaining balance: "<<balance<<endl;
    }

    catch(Exception e){
        cout<<"Exception occurred: "<<e.what()<<endl;
    }
}