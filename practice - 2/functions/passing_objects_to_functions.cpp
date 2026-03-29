#include <iostream>
using namespace std;

class matrix {
    int m[2][2];

public:
    void get_data() {
        int i, j;
        cout << "Enter the elements of 2*2 matrix:\n";
        for (i = 0; i < 2; i++) {
            for (j = 0; j < 2; j++) {
                cout << "m[" << i << "][" << j << "] = ";
                cin >> m[i][j];
            }
        }
    }

    void display() {
        int i, j;
        for (i = 0; i < 2; i++) {
            cout << "\n";
            for (j = 0; j < 2; j++) {
                cout << m[i][j] << "\t";
            }
        }
    }

    void addition(matrix, matrix);
};

void matrix::addition(matrix m1, matrix m2) {
    int i, j;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            m[i][j] = m1.m[i][j] + m2.m[i][j];
        }
    }
}

int main() {
    matrix M1, M2, M3;

    M1.get_data();
    M2.get_data();

    M3.addition(M1, M2);

    cout << "Resultant matrix:";
    M3.display();
}