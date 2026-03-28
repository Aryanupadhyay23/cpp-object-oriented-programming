#include <iostream>
using namespace std;

void displayMessage() {

    // Local class defined inside function
    class LocalClass {
    public:
        void show() {
            cout << "This is a Local Class inside a function." << endl;
        }
    };

    LocalClass obj;   // object of local class
    obj.show();
}

int main() {

    displayMessage();
}