// Project Phonebook
// version 1.0

#include <string>
#include <iostream>
#include <exception>

class Name {
public:
  Name() = delete;
  explicit Name(const std::string& first_name, const std::string& last_name) {
    if (verifyName(first_name, last_name)) {
      first_name_ = first_name;
      last_name_ = last_name;
    }
    else { throwInvalidArgument(first_name, last_name); }
  }
  explicit Name(const std::string&& first_name, const std::string&& last_name) {
    if (verifyName(first_name, last_name)) {
      first_name_ = first_name;
      last_name_ = last_name;
    }
    else { throwInvalidArgument(first_name, last_name); }
  }
  std::string& get_first_name() { return first_name_; }
  const std::string& get_first_name() const { return first_name_; }
  std::string& get_last_name() { return last_name_; }
  const std::string& get_last_name() const { return last_name_; }
private:
  bool verifyName(const std::string& first_name, const std::string& last_name) {
    if (first_name.empty() || last_name.empty()) { return false; }
    else { return true; }
  }
  void throwInvalidArgument(const std::string& first_name, const std::string& last_name) {
    throw std::invalid_argument(first_name + " or " + last_name + " is and invalid name");
  }
  std::string first_name_;
  std::string last_name_;
};



int main(int argc, char ** argv) {
  std::cout << "Testing for Phonebook" << std::endl;
  Name ph("first", "name");
  std::cout << ph.get_first_name() << ph.get_last_name() << std::endl;
}
