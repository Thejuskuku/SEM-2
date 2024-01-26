#include <iostream>
#include <cmath>

class Vector3D {
private:
    double x;
    double y;
    double z;

public:
    // Constructor
    Vector3D(double x = 0, double y = 0, double z = 0)
        : x(x), y(y), z(z) {}

    // Getter
    double getX() const { return x; }
    double getY() const { return y; }
    double getZ() const { return z; }

    // Setter
    void setX(double x) { this->x = x; }
    void setY(double y) { this->y = y; }
    void setZ(double z) { this->z = z; }

    // Vector addition
    Vector3D operator+(const Vector3D& v) const {
        return Vector3D(x + v.x, y + v.y, z + v.z);
    }

    // Vector subtraction
    Vector3D operator-(const Vector3D& v) const {
        return Vector3D(x - v.x, y - v.y, z - v.z);
    }

    // Scalar multiplication
    Vector3D operator*(double scalar) const {
        return Vector3D(x * scalar, y * scalar, z * scalar);
    }

    // Dot product
    double operator*(const Vector3D& v) const {
        return x * v.x + y * v.y + z * v.z;
    }

    // Cross product
    Vector3D operator^(const Vector3D& v) const {
        return Vector3D(y * v.z - z * v.y, z * v.x - x * v.z, x * v.y - y * v.x);
    }

    // Length of the vector
    double length() const {
        return std::sqrt(x * x + y * y + z * z);
    }

    // Print vector
    void print() const {
        std::cout << "(" << x << ", " << y << ", " << z << ")\n";
    }
};
int main() {
    Vector3D v1(1, 2, 3);
    Vector3D v2(4, 5, 6);

    Vector3D v3 = v1 + v2;
    Vector3D v4 = v1 - v2;
    Vector3D v5 = v1 * 2;
    double dot_product = v1 * v2;
    Vector3D cross_product = v1 ^ v2;

    std::cout << "v1 + v2: "; v3.print();
    std::cout << "v1 - v2: "; v4.print();
    std::cout << "v1 * 2: "; v5.print();
    std::cout << "Dot Product: " << dot_product << std::endl;
    std::cout << "Cross Product: "; cross_product.print();

    return 0;
}