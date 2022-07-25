#ifndef PHONEBOOK_TELEPHONENUMBER_H_
#define PHONEBOOK_TELEPHONENUMBER_H_
#include <string>
#include <ostream>

class TelephoneNumber {
public:
    TelephoneNumber() = delete;
    TelephoneNumber(const std::string& tel_num);
    static const std::string& ValidateTelephoneNumber(const std::string& tel_num);
    friend std::ostream& operator << (std::ostream& os, const TelephoneNumber& telephone_number);
private:
    const std::string m_telephone_number;
};

std::ostream& operator << (std::ostream& os, const TelephoneNumber& telephone_number);

#endif // PHONEBOOK_TELEPHONENUMBER_H_
