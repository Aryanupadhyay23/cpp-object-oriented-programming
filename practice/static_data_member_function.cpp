#include <iostream>
using namespace std;

class Customer {
private:
    string name;
    int id;

public:
    static int totalCustomers;   // static data member

    Customer(string n, int i) {
        name = n;
        id = i;
        totalCustomers++;        // increase count
    }

    void display() {
        cout << "Customer Name: " << name << endl;
        cout << "Customer ID: " << id << endl;
    }

    static void showTotalCustomers() {   // static member function
        cout << "Total Customers: " << totalCustomers << endl;
    }
};

// definition of static data member
int Customer::totalCustomers = 0;

int main() {

    Customer c1("Aryan",101);
    Customer c2("Rahul",102);
    Customer c3("Ankit",103);

    c1.display();
    cout << endl;

    c2.display();
    cout << endl;

    c3.display();
    cout << endl;

    Customer::showTotalCustomers();   // calling static function
}