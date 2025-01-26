//a. Write a friend function for adding two complex numbers using a single class.
#include <iostream>
using namespace std;

// Class for Complex Number
class Complex {
private:
    float real;
    float imag;

public:
    // Constructor to initialize the complex number
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}

    // Friend function to add two complex numbers
    friend Complex addComplex(Complex, Complex);

    // Function to display the complex number
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

// Friend function to add two complex numbers
Complex addComplex(Complex c1, Complex c2) {
    // Adding the real and imaginary parts separately
    float realPart = c1.real + c2.real;
    float imagPart = c1.imag + c2.imag;
    return Complex(realPart, imagPart); // Return the result as a new Complex object
}

int main() {
    Complex num1(3.5, 2.5), num2(1.5, 4.5);
    Complex result = addComplex(num1, num2); // Add the two complex numbers using friend function
    cout << "Sum of the complex numbers: ";
    result.display(); // Display the result
    return 0;
}
