//
// Created by strive on 2025/4/13.
//

#ifndef DS_ALG_STRING_H
#define DS_ALG_STRING_H

#endif //DS_ALG_STRING_H

#include <iostream>
#include <cstring>
using namespace std;

class String {
private:
    char * str;
    size_t length;

public:
    String();
    String(const char *s);
    ~String();
    size_t getLength() const;
    char operator[] (size_t index) const;
    String& operator=(const String& s);
    bool operator==(const String& s) const;
    bool operator!=(const String& s) const;
    String copy() const;
    String operator+(const String& s);
    friend ostream& operator<<(ostream  &out,const String& s);
};