#include<iostream>
using namespace std;

template <class T>
void Number(T value){
    cout<<"Entered number is: "<<value<<endl;
}

int main(){
    Number <int>(35);
    Number <float>(3.5);
    Number <char>('N');
    return 0;
}