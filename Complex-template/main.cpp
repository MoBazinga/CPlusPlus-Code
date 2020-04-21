#include "Complex.hpp"

int main()
{
    Complex<float, float> a(1, 2);
    Complex<float, float> b(2, 3);
    Complex<float, float> c;

    c = a + b;
    cout << c;

    c = a - b;
    cout << c;

    c = a * b;
    cout << c;

    c = a / b;
    cout << c;

    return 0;
}
