#include <iostream>
using namespace std;

template <class T1, class T2>
class Largest {
    T1 Val1;
    T2 Val2;

public:
    Largest(T1 x, T2 y) {
        Val1 = x;
        Val2 = y;
    }

    void show_result() {
        cout << "Largest number is: "
             << (Val1 > Val2 ? Val1 : Val2)
             << endl;
    }
};

int main() {
    Largest<int, float> L1(35, 3.7);
    Largest<char, char> L2('N', 'M');
    Largest<float, double> L3(3.5, 35.50);

    L1.show_result();
    L2.show_result();
    L3.show_result();

    return 0;
}