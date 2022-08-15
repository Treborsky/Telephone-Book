// Phonebook project
#ifndef PHONEBOOK_PHONE_NUMBER_H_
#define PHONEBOOK_PHONE_NUMBER_H_

#include <string>

class PhoneNumber {
public:
  PhoneNumber() : phone_number_("no phone number") {}
private:
  std::string phone_number_;
};

#endif // PHONEBOOK_PHONE_NUMBER_H_
