#include<iostream>
using namespace std;

void Number(int value){
    try{
        if(value==0) throw 'x';
        else if (value>0) throw'x';
        else if (value<0) throw 1.0;
        cout<<"end of try block\n";
    }
    catch(char ch){
        cout<<"caught a null value\n";
    }
    catch(int m){
        cout<<"caught a positive value";
    }
    catch(double d){
        cout<<"caught a negative value"<<endl;
    }
    cout<<"end of try-catch block\n";
}

int main(){
    Number(7);
    Number(0);
    Number(-2);
}