#include<iostream>
using namespace std;

template <class T>
class Number{
    public:
    Number (T value);
};

template <class T>
Number<T>::Number(T value){
    cout<<"Entered number is: "<<value<<endl;
}
int main(){
    Number <int> I1(35);
    Number <float> I2(3.5);
    Number <char> I3('N');
}