#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream fout;
    fout.open("sample.txt");
    fout<<"Hello, World!";
    fout.close();
}