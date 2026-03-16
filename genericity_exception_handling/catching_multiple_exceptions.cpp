#include<iostream>
using namespace std;

void Number(int value){
    try{
        if(value==0) throw 'x';
        else if(value>0) throw 'x';
        else if(value<0) throw 1.0;

        cout<<"end of try block\n";
    }

    catch(...){
        cout<<"caught an exception\n";
    }
}

int main(){
    Number(7);
    Number(0);
    Number(-2);
}