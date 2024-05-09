/* 5. Create a class ComplexNumber with data members real, imaginary. Create Default and Parameterized constructors. Write getters and setters for all the data members. Also add the display function. Create the object of this class in main method and invoke all the methods in that class. */


#include <iostream>
using namespace std;

class ComplexNumber {
private:
    double real;
    double imaginary;

public:
    ComplexNumber() {
        real = 0.0;
        imaginary = 0.0;
    }

    ComplexNumber(double re, double im) {
        real = re;
        imaginary = im;
    }

    double getReal() {
        return real;
    }

    void setReal(double re) {
        real = re;
    }

    double getImaginary() {
        return imaginary;
    }

    void setImaginary(double im) {
        imaginary = im;
    }

    void display() {
        cout << "Complex Number: " << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
    ComplexNumber complex1;  
    ComplexNumber complex2(3.5, 2.0); 

    cout << "Initial Information for Complex Number 1:" << endl;
    complex1.display();
    cout << endl;

    cout << "Initial Information for Complex Number 2:" << endl;
    complex2.display();
    cout << endl;

    complex1.setReal(1.0);
    complex1.setImaginary(5.0);

    cout << "Updated Information for Complex Number 1:" << endl;
    complex1.display();
    cout << endl;

    cout << "Accessing Information for Complex Number 2 using getters:" << endl;
    cout << "Real Part: " << complex2.getReal() << endl;
    cout << "Imaginary Part: " << complex2.getImaginary() << endl;

    return 0;
}
