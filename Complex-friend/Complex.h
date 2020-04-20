#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
using namespace std;

class Complex
{
public:
    Complex();
    Complex(float real, float image);

    virtual ~Complex();

    friend Complex operator+(const Complex &c1, const Complex &c2);
    friend Complex operator-(const Complex &c1, const Complex &c2);
    friend Complex operator*(const Complex &c1, const Complex &c2);
    friend Complex operator/(const Complex &c1, const Complex &c2);

    friend ostream & operator<<(ostream &os, const Complex &c);

private:
    float m_real;
    float m_image;
};

#endif // COMPLEX_H
