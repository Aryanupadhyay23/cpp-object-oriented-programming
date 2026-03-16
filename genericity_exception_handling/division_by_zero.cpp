#include<iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    try{
        if(b == 0){
            throw "undefined";
        }

        int c = a / b;
        cout << "Result = " << c << endl;
    }

    catch(const char *e){
        cout << "Exception occurred: " << e << endl;
    }

}