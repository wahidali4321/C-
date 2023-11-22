#include <iostream>

class Fraction {
private:
    int numerator;
    int denominator;

public:
    // Constructor
    Fraction(int num, int denom) : numerator(num), denominator(denom) {
        if (denominator == 0) {
            std::cerr << "Error: Denominator cannot be zero." << std::endl;
            exit(EXIT_FAILURE);
        }
    }

    // Simplify the fraction
    void simplify() {
        int gcd = findGCD(numerator, denominator);
        numerator /= gcd;
        denominator /= gcd;
    }

    // Find greatest common divisor using Euclidean algorithm
    int findGCD(int a, int b) {
        if (b == 0) {
            return a;
        } else {
            return findGCD(b, a % b);
        }
    }

    // Overloaded addition operator for fractions
    Fraction operator+(const Fraction &other) const {
        int resultNumerator = numerator * other.denominator + other.numerator * denominator;
        int resultDenominator = denominator * other.denominator;
        Fraction result(resultNumerator, resultDenominator);
        result.simplify();
        return result;
    }

    // Overloaded subtraction operator for fractions
    Fraction operator-(const Fraction &other) const {
        int resultNumerator = numerator * other.denominator - other.numerator * denominator;
        int resultDenominator = denominator * other.denominator;
        Fraction result(resultNumerator, resultDenominator);
        result.simplify();
        return result;
    }

    // Overloaded multiplication operator for fractions
    Fraction operator*(const Fraction &other) const {
        int resultNumerator = numerator * other.numerator;
        int resultDenominator = denominator * other.denominator;
        Fraction result(resultNumerator, resultDenominator);
        result.simplify();
        return result;
    }

    // Overloaded division operator for fractions
    Fraction operator/(const Fraction &other) const {
        int resultNumerator = numerator * other.denominator;
        int resultDenominator = denominator * other.numerator;
        Fraction result(resultNumerator, resultDenominator);
        result.simplify();
        return result;
    }

    // Overloaded addition operator for adding an integer to a fraction
    Fraction operator+(int integer) const {
        Fraction intFraction(integer, 1);
        return (*this) + intFraction;
    }

    // Display the fraction
    void display() const {
        std::cout << numerator << "/" << denominator << std::endl;
    }
};

int main() {
    Fraction fraction1(1, 3);
    Fraction fraction2(2, 3);

    // Examples of fraction operations
    Fraction sum = fraction1 + fraction2;
    Fraction difference = fraction2 - fraction1;
    Fraction product = fraction1 * fraction2;
    Fraction quotient = fraction1 / fraction2;

    // Display results
    std::cout << "Sum: ";
    sum.display();

    std::cout << "Difference: ";
    difference.display();

    std::cout << "Product: ";
    product.display();

    std::cout << "Quotient: ";
    quotient.display();

    // Adding an integer to a fraction
    Fraction sumWithInteger = fraction1 + 1;
    std::cout << "Sum with Integer: ";
    sumWithInteger.display();

    return 0;
}
