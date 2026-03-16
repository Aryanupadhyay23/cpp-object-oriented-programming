#include<iostream>
using namespace std;

void division(int x, int y){
    cout<<"inside function\n";

    try{
        if(y == 0){
            throw y;
        }
        else{
            cout<<"division = "<<x/y<<endl;
        }
    }

    catch(int y){
        cout<<"divide by zero inside function\n";
        throw;   // rethrow exception to caller
    }

    cout<<"end of function\n";
}

int main(){

    cout<<"inside main\n";

    try{
        division(20, 0);
    }

    catch(int e){
        cout<<"caught divide by zero inside main"<<endl;
    }

    cout<<"end of main function";
}