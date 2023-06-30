/*
* Program: (Assignment 5P: Objects & Classes 1)
* Author: Matt Aaron Magnaye
* Instructor: Professor David Harden
* Date: 06/30/2023
* Instructions: Write a Fraction class whose objects will represent fractions. 
*
*/
#include <iostream>
using namespace std;


// Note: 1) do not reduce fractions, (2) do not use "const," (3) do not provide any constructors, and (4) do not use three separate files.
class Fraction {
private:
    int numerator;
    int denominator;

public:
    void set(int num, int denom) {
        numerator = num;
        denominator = denom;
    }

    Fraction addedTo(Fraction other) {
        Fraction result;
        result.numerator = (numerator * other.denominator) + (other.numerator * denominator);
        result.denominator = denominator * other.denominator;
        return result;
    }

    Fraction subtract(Fraction other) {
        Fraction result;
        result.numerator = (numerator * other.denominator) - (other.numerator * denominator);
        result.denominator = denominator * other.denominator;
        return result;
    }

    Fraction multipliedBy(Fraction other) {
        Fraction result;
        result.numerator = numerator * other.numerator;
        result.denominator = denominator * other.denominator;
        return result;
    }

    Fraction dividedBy(Fraction other) {
        Fraction result;
        result.numerator = numerator * other.denominator;
        result.denominator = denominator * other.numerator;
        return result;
    }

    bool isEqualTo(Fraction other) {
        return (numerator * other.denominator) == (denominator * other.numerator);
    }

    void print() {
        cout << numerator << "/" << denominator;
    }
};

int main()
{
    Fraction f1;
    Fraction f2;
    Fraction result;

    f1.set(9, 8);
    f2.set(2, 3);

    cout << "The product of ";
    f1.print();
    cout << " and ";
    f2.print();
    cout << " is ";
    result = f1.multipliedBy(f2);
    result.print();
    cout << endl;

    cout << "The quotient of ";
    f1.print();
    cout << " and ";
    f2.print();
    cout << " is ";
    result = f1.dividedBy(f2);
    result.print();
    cout << endl;

    cout << "The sum of ";
    f1.print();
    cout << " and ";
    f2.print();
    cout << " is ";
    result = f1.addedTo(f2);
    result.print();
    cout << endl;

    cout << "The difference of ";
    f1.print();
    cout << " and ";
    f2.print();
    cout << " is ";
    result = f1.subtract(f2);
    result.print();
    cout << endl;

    if (f1.isEqualTo(f2)){
        cout << "The two Fractions are equal." << endl;
    } else {
        cout << "The two Fractions are not equal." << endl;
    }

    return 0;
}
