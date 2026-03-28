#include<iostream>
using namespace std;

class Complex{
    float a, b;

public:
    void get_data(float real, float img){
        a = real;
        b = img;
    }

    void display(){
        cout << a << " + i" << b << "\n";
    }

    friend Complex Sum(Complex, Complex);
};

Complex Sum(Complex c1, Complex c2){
    Complex c3;
    c3.a = c1.a + c2.a;
    c3.b = c1.b + c2.b;
    return c3;
}

int main(){
    Complex X, Y, Z;

    X.get_data(5.2, 4.0);
    Y.get_data(3.1, 2.5);

    Z = Sum(X, Y);

    cout << "First Complex Number: ";
    X.display();

    cout << "Second Complex Number: ";
    Y.display();

    cout << "Sum of Complex Numbers: ";
    Z.display();
}