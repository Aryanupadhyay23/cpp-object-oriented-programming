#include <iostream>
using namespace std;

class Matrix {
private:
    int a[2][2];

public:

    void input() {
        cout << "Enter elements of matrix:\n";
        for(int i = 0; i < 2; i++) {
            for(int j = 0; j < 2; j++) {
                cin >> a[i][j];
            }
        }
    }

    void display() {
        for(int i = 0; i < 2; i++) {
            for(int j = 0; j < 2; j++) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }

    Matrix add(Matrix m) {   // matrix object passed by value
        Matrix temp;

        for(int i = 0; i < 2; i++) {
            for(int j = 0; j < 2; j++) {
                temp.a[i][j] = a[i][j] + m.a[i][j];
            }
        }

        return temp;   // returning result matrix
    }
};

int main() {

    Matrix m1, m2, result;

    cout << "Enter first matrix:\n";
    m1.input();

    cout << "Enter second matrix:\n";
    m2.input();

    result = m1.add(m2);

    cout << "Resultant Matrix:\n";
    result.display();

    return 0;
}