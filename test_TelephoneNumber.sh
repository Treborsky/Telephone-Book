#!/usr/bin/bash
TEST_SOURCES="TelephoneNumber.cc TelephoneNumberTest.cc"
g++ -std=c++17 -Wall -Werror -Wextra -Wpedantic -Wconversion -Wcast-align -Wunused -Wshadow -Wold-style-cast -Wpointer-arith -Wcast-qual -Wno-missing-braces -O2 -fexceptions -finline-functions ${TEST_SOURCES} -o Phonebook