#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    void setData(int r, int i) {
        real = r;
        imag = i;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }

    Complex add(Complex c) {   // object passed
        Complex temp;          // temporary object

        temp.real = real + c.real;
        temp.imag = imag + c.imag;

        return temp;           // returning object
    }
};

int main() {

    Complex c1, c2, result;

    c1.setData(3, 4);
    c2.setData(5, 6);

    result = c1.add(c2);   // returned object stored

    cout << "Sum of complex numbers: ";
    result.display();

    return 0;
}