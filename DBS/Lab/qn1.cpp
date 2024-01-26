#include <iostream>
#include <cmath>

class ComplexNumber {
private:
   double real;
   double imag;

public:
   ComplexNumber(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

   ComplexNumber operator+(const ComplexNumber& other) const {
       return ComplexNumber(real + other.real, imag + other.imag);
   }

   ComplexNumber operator-(const ComplexNumber& other) const {
       return ComplexNumber(real - other.real, imag - other.imag);
   }

   ComplexNumber operator*(const ComplexNumber& other) const {
       return ComplexNumber(real * other.real - imag * other.imag, real * other.imag + imag * other.real);
   }

   ComplexNumber operator/(const ComplexNumber& other) const {
       if (other.real == 0 && other.imag == 0) {
           throw std::invalid_argument("Cannot divide by zero");
       }
       double denominator = other.real * other.real + other.imag * other.imag;
       return ComplexNumber((real * other.real + imag * other.imag) / denominator,
                            (imag * other.real - real * other.imag) / denominator);
   }

   double abs() const {
       return std::sqrt(real * real + imag * imag);
   }

   ComplexNumber conjugate() const {
       return ComplexNumber(real, -imag);
   }

   ComplexNumber negate() const {
       return ComplexNumber(-real, -imag);
   }

   friend std::ostream& operator<<(std::ostream&, const ComplexNumber&);
};

std::ostream& operator<<(std::ostream& os, const ComplexNumber& c) {
   os << c.real << " + " << c.imag << "i";
   return os;
}

// Example usage:
int main() {
   ComplexNumber num1(2, 3);
   ComplexNumber num2(1, 2);

   std::cout << "Addition: " << (num1 + num2) << std::endl;
   std::cout << "Subtraction: " << (num1 - num2) << std::endl;
   std::cout << "Multiplication: " << (num1 * num2) << std::endl;
   std::cout << "Division: " << (num1 / num2) << std::endl;
   std::cout << "Absolute Value: " << num1.abs() << std::endl;
   std::cout << "Conjugate: " << num1.conjugate() << std::endl;
   std::cout << "Negation: " << num1.negate() << std::endl;

   return 0;
}