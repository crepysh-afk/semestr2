#include "Cone.h"
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <stdexcept>

using namespace std;
/**
 * @brief Реализация конструктора с проверкой корректности параметров.
 */
Cone::Cone(double cx, double cy, double cz, double r, double h)
    : x(cx), y(cy), z(cz), radius(r), height(h)
{
    validate();  
}

void Cone::validate() const {
    if (radius <= 0)
        throw invalid_argument("Radius must be greater than 0.");

    if (height <= 0)
        throw invalid_argument("Height must be greater than 0.");
}
/**
 * @brief Вычисляет образующую конуса.
 */
double Cone::slantHeight() const {
    return sqrt(radius * radius + height * height);
}
/**
 * @brief Вычисляет полную площадь поверхности конуса.
 */
double Cone::surfaceArea() const {
    double l = slantHeight();
    return M_PI * radius * (radius + l);
}
/**
 * @brief Печатает параметры конуса и площадь поверхности.
 */
void Cone::print() const {
    cout << "Center:: (" << x << ", " << y << ", " << z << ")" << endl;
    cout << "Radius: " << radius << endl;
    cout << "Height: " << height << endl;
    cout << "Surface Area: " << surfaceArea() << endl;
}
