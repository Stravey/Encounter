//
// Created by strive on 2025/4/13.
//
#include "String.h"

String::String() {
    length = 0;
    str = new char[1];
    str[0] = '\0';
}

String::String(const char *s) {
    length = strlen(s);
    str = new char[length + 1];
    strcpy(str,s);
}

String::~String() {
    delete[] str;
}

size_t String::getLength() const {
    return length;
}

char String::operator[](size_t index) const {
    return str[index];
}

String& String::operator=(const String &s) {
    if(this != &s) {
        delete[] str;
        length = s.length;
        str = new char[length + 1];
        strcpy(str,s.str);
    }
    return *this;
}

bool String::operator==(const String &s) const{
    return strcmp(str,s.str) == 0;
}

bool String::operator!=(const String &s) const{
    return strcmp(str,s.str) != 0;
}

String String::copy() const {
    String s = *this;
    return s;
}

String String::operator+(const String &s) {
    String result;
    result.length = length + s.length;
    result.str = new char[result.length + 1];
    strcpy(result.str,str);
    strcat(result.str,s.str);
    return result;
}

ostream& operator<<(ostream& out,const String &s) {
    out << s.str;
    return out;
}



