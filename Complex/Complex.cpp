#include "Complex.h"

Complex::Complex()
{

}

Complex::Complex(float real, float image)
{
    m_real = real;
    m_image = image;
}

//ÖØÔØ+ÔËËã·û
Complex Complex::operator+(const Complex &c) const
{
    Complex temp;
    temp.m_real = this->m_real + c.m_real;
    temp.m_image = this->m_image + c.m_image;

    return temp;
}

//ÖØÔØ-ÔËËã·û
Complex Complex::operator-(const Complex &c) const
{
    Complex temp;
    temp.m_real = this->m_real - c.m_real;
    temp.m_image = this->m_image - c.m_image;

    return temp;
}

//ÖØÔØ*ÔËËã·û
Complex Complex::operator*(const Complex &c) const
{
    Complex temp;
    temp.m_real = (this->m_real * c.m_real) - (this->m_image * c.m_image);
    temp.m_image =(this->m_image * c.m_real) + (this->m_real * c.m_image);

    return temp;
}

//ÖØÔØ/ÔËËã·û
Complex Complex::operator/(const Complex &c) const
{
    Complex temp;
    temp.m_real = (this->m_real * c.m_real + this->m_image * c.m_image) /
                  (c.m_real * c.m_real + c.m_image * c.m_image);

    temp.m_image =(this->m_image * c.m_real - this->m_real * c.m_image) /
                  (c.m_real * c.m_real + c.m_image * c.m_image);

    return temp;
}

ostream & operator<<(ostream &os, const Complex &c)
{
    os << c.m_real << "+" << c.m_image << "i" << endl;
    return os;
}

Complex::~Complex()
{

}
