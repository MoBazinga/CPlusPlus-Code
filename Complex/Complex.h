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

    Complex operator+(const Complex &c) const;
    Complex operator-(const Complex &c) const;
    Complex operator*(const Complex &c) const;
    Complex operator/(const Complex &c) const;

    void Print() const;

private:
    float m_real;
    float m_image;
};

#endif // COMPLEX_H
