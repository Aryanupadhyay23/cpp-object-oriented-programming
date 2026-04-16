#include<iostream>
using namespace std;

template <class T1, class T2>
void Number(T1 value1, T2 value2){
    cout<<"Entered numbers are: "<<value1<<" and "<<value2<<endl;
}

int main(){
    Number <int, float>(35, 3.5);
    Number <float, char>(3.5, 'N');
    Number <char, int>('N', 35);
    return 0;
}
