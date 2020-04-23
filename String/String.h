#ifndef STRING_H
#define STRING_H

#include <iostream>

using namespace std;

class String
{
public:
    String();
    String(const char *str);
    String(const String &str);
    ~String();

    const unsigned int Strlen(const char *str);

    String& operator =(const char *str);
    String& operator =(const String &str);

    char& operator [](unsigned int index);
    const char& operator[](unsigned int index) const;

    String operator +(const String &str);
    friend bool operator <(const String &str1, const String &str2);
    friend bool operator >(const String &str1, const String &str2);
    friend bool operator ==(const String &str1, const String &str2);

    friend ostream& operator <<(ostream &os, const String &str);
    friend istream& operator >>(istream &os, const String &str);

private:
    char *m_str;
};

#endif // STRING_H
