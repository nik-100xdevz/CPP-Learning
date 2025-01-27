#include <iostream> 
using namespace std;

class Demo {
private:
    int x; // Private member

public:
    // Constructor to initialize the member variable
    Demo(int val) {
        x = val;
    }

    // Member function prototype (declaration)
    void displayValue();
};

// Definition of the member function outside the class
void Demo::displayValue() {
    cout << "The value of x is: " << x << endl;
}

int main() {
    // Create an object of the class Demo
    Demo obj(10);

    // Access the member function displayValue
    obj.displayValue();

    return 0;
}

