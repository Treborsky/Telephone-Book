// Phonebook project
#ifndef PHONEBOOK_NAME_H_
#define PHONEBOOK_NAME_H_

#include <string>

class Name {
  public:
  virtual std::string& get_first_name() { return first_name_; }
  virtual std::string& get_last_name() { return last_name_; }
  virtual const std::string& get_first_name() const { return first_name_; }
  virtual const std::string& get_last_name() const { return last_name_; }

  private:
  std::string first_name_;
  std::string last_name_;
};

#endif // PHONEBOOK_NAME_H_
