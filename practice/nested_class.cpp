#include <iostream>
using namespace std;

class Outer {
private:
    int data;

public:
    Outer(int d) {
        data = d;
    }

    class Inner {
    public:
        void showData(Outer obj) {
            cout << "Data from Outer class: " << obj.data << endl;
        }
    };
};

int main() {

    Outer o(50);

    Outer::Inner i;
    i.showData(o);

    return 0;
}