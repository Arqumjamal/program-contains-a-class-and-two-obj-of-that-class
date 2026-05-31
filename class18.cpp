#include <iostream>
using namespace std;

// Simple C++ program demonstrating Encapsulation using a class with a private data member and public methods to set and display its value.

class DataMember {

private:
    int DataMember; // Private data member

public:
    void set(int a) {
        DataMember = a; // Assign value to data member
    }

    void Show() {
        cout << "The  Data Member of a value is  : " << DataMember << endl; // Display value
    }
};

int main() {

    DataMember M1;      // Create object
    M1.set(10000000);   // Set value
    M1.Show();          // Display value

    return 0;
}