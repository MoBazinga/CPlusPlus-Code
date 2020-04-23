#include "String.h"

String::String()
{
    m_str = new char[1];
    m_str[0] = '\0';
}

String::String(const char *str)
{
    if (str == nullptr)
    {
        m_str = new char[1];
        m_str[0] = '\0';
    }
    else
    {
        m_str = new char[Strlen(str) + 1];
        strcpy(m_str, str);
    }
}

String::String(const String &str)
{
    m_str = new char[Strlen(str.m_str) + 1];
    strcpy(m_str, str.m_str);
}

String& String::operator =(const char *str)
{
    delete [] m_str;  //删除旧的str空间

    m_str = new char[Strlen(str) + 1];
    strcpy(this->m_str, str);
    return *this;
}

const unsigned int String::Strlen(const char *str)
{
    if (str == nullptr)
    {
        return 0;
    }

    int len = 0;
    while (*str != '\0')
    {
        len++;
        str++;
    }

    return len;
}

String& String::operator =(const String &str)
{
    if (this == &str)
    {
        return *this; //将自身赋值给自身
    }
    delete [] m_str;  //删除旧的str空间

    m_str = new char[Strlen(str.m_str) + 1];
    strcpy(this->m_str, str.m_str);
    return *this;
}

String String::operator +(const String &str)
{
    String tempStr;
    if (!str.m_str)
    {
        return *this;
    }
    else if (!this->m_str)
    {
        return str;
    }
    else
    {
        tempStr.m_str = new char[Strlen(this->m_str) + Strlen(str.m_str) + 1];
        strcpy(tempStr.m_str, this->m_str);
        strcpy(tempStr.m_str, str.m_str);
        return tempStr;
    }
}

char& String::operator [](unsigned int index)
{
    return this->m_str[index];
}

const char& String::operator[](unsigned int index) const
{
    return this->m_str[index];
}

bool operator <(const String &str1, const String &str2)
{
    if (strcmp(str1, str2) < 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool operator >(const String &str1, const String &str2)
{
    if (strcmp(str1, str2) > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool operator ==(const String &str1, const String &str2)
{
    if (strcmp(str1, str2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

ostream& operator <<(ostream &os, const String &str)
{
    os << str.m_str << endl;
    return os;
}

istream& operator >>(istream &is, const String &str)
{
    char temp[100];
    is.get(temp, 100);

    if (is)
    {
        is = str;
    }

    while (is && is.get() != '\n')
    {
        continue;
    }

    return is;
}

String::~String()
{
    delete [] m_str;
}
