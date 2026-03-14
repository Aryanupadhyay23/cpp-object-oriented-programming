#include<iostream>
using namespace std;

class Matrix{
    int m[2][2];

public:
    void getdata(){
        int i, j;
        cout<<"Enter elements of 2x2 matrix:\n";
        for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                cout<<"m["<<i<<"]["<<j<<"] = ";
                cin>>m[i][j];
            }
        }
    }

    void display(){
        int i,j;
        for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                cout<<m[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    void addition(Matrix, Matrix);   // declaration only
};

void Matrix::addition(Matrix a, Matrix b)   // definition outside class
{
    int i,j;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            m[i][j] = a.m[i][j] + b.m[i][j];
        }
    }
}

int main(){
    Matrix m1, m2, m3;

    cout<<"Enter first matrix\n";
    m1.getdata();

    cout<<"Enter second matrix\n";
    m2.getdata();

    m3.addition(m1,m2);

    cout<<"Result matrix\n";
    m3.display();
}