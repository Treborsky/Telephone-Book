#include "TelephoneNumber.h"
#include <iostream>

TelephoneNumber::TelephoneNumber(const std::string& tel_num) 
 : m_telephone_number(ValidateTelephoneNumber(tel_num))
{}

const std::string TelephoneNumber::ValidateTelephoneNumber(const std::string& tel_num) {
    bool correct = true;
    if (tel_num.at(0) == '+') {
        correct = true;
    } else {
        correct = false;
    }
    if (correct) {
        return tel_num;
    }
    return "\0";
}

std::ostream& operator << (std::ostream& os, const TelephoneNumber& telephone_number) {
    os << telephone_number.m_telephone_number;
    return os;
}
