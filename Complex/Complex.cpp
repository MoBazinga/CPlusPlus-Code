#include "Complex.h"

Complex::Complex()
{

}

Complex::Complex(float real, float image)
{
    m_real = real;
    m_image = image;
}

//重载+运算符
Complex Complex::operator+(const Complex &c) const
{
    Complex temp;
    temp.m_real = this->m_real + c.m_real;
    temp.m_image = this->m_image + c.m_image;

    return temp;
}

//重载-运算符
Complex Complex::operator-(const Complex &c) const
{
    Complex temp;
    temp.m_real = this->m_real - c.m_real;
    temp.m_image = this->m_image - c.m_image;

    return temp;
}

//重载*运算符
Complex Complex::operator*(const Complex &c) const
{
    Complex temp;
    temp.m_real = (this->m_real * c.m_real) - (this->m_image * c.m_image);
    temp.m_image =(this->m_image * c.m_real) + (this->m_real * c.m_image);

    return temp;
}

//重载/运算符
Complex Complex::operator/(const Complex &c) const
{
    Complex temp;
    temp.m_real = (this->m_real * c.m_real + this->m_image * c.m_image) /
                  (c.m_real * c.m_real + c.m_image * c.m_image);

    temp.m_image =(this->m_image * c.m_real - this->m_real * c.m_image) /
                  (c.m_real * c.m_real + c.m_image * c.m_image);

    return temp;
}

void Complex::Print() const
{
    cout << "comlex = " << m_real << "+" <<  m_image << "i" << endl;
}

Complex::~Complex()
{

}
