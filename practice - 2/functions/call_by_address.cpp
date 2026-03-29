#include<iostream>
using namespace std;

void change_value(int*, int*);

int main() {
    int x, y;

    cout << "Enter the numbers : ";
    cin >> x >> y;

    cout << "Before calling in main" << endl;
    cout << "x = " << x << " y = " << y << endl;

    change_value(&x, &y);

    cout << "After calling in main" << endl;
    cout << "x = " << x << " y = " << y << endl;
}

void change_value(int *a, int *b) {
    int temp;       

    temp = *a;
    *a = *b;
    *b = temp;

    cout << "in function change value" << endl;
    cout << "x = " << *a << " y = " << *b << endl;
}