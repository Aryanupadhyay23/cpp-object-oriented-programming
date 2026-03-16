#include<iostream>
#include<exception>
using namespace std;

int main(){
    try{
        int *p = new int[1000000000000000];
        cout<<"Memory allocation is successful\n";
        delete[] p;
    }

    catch(const exception &e){
        cout<<"Memory unavailable: "<<e.what()<<endl;
    }
}