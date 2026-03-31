#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream fin("sample.txt");

    if(!fin){
        cout << "File not found\n";
        return 0;
    }

    char c;

    while(fin.get(c)){   // reads everything including spaces
        cout << c;
    }

    fin.close();
}