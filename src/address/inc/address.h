// Phonebook project
#ifndef PHONEBOOK_ADDRESS_H_
#define PHONEBOOK_ADDRESS_H_

#include <string>

class Address {
public:
  Address() : address_("no address") {}
private:
  std::string address_;
};

#endif // PHONEBOOK_ADDRESS_H_
