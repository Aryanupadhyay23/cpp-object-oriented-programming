#include<iostream>
using namespace std;

void Result();
int main(){
    Result();
}
void Result(){
    class Sum{
        int a, b;
        public:
            void get(int x, int y){
                a = x;
                b = y;
            }
            int show(){
                return a+b;
            }
    };
    Sum S;
    S.get(45,56);
    cout<<"Result is : "<<S.show();
}

