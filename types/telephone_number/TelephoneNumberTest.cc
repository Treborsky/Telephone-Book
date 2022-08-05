#include <iostream>
#include "TelephoneNumber.h"

static bool TelephoneNumber_create_TEST() {
    try {
        TelephoneNumber telephone_number("+48888888");
        std::cout << "PASSED " << __func__ << std::endl;
        return true;
    } catch (...) {
        std::cout << "FAILED " << __func__ << std::endl;
        return false;
    }
}

static bool TelephoneNumber_destroy_TEST() {
    try {
        TelephoneNumber telephone_number("+48888888");
        std::cout << "PASSED " << __func__ << std::endl;
        return true;
    } catch (...) {
        std::cout << "FAILED " << __func__ << std::endl;
        return false;
    }
}

static bool TelephoneNumber_ValidateTelephoneNumber_correct_TEST() {
    try {
        // act & assert
        if (TelephoneNumber::ValidateTelephoneNumber("+48888888") != "+48888888") {
            throw std::exception();
        }
        std::cout << "PASSED " << __func__ << std::endl;
        return true;
    } catch (...) {
        std::cout << "FAILED " << __func__ << std::endl;
        return false;
    }
}

static bool TelephoneNumber_ValidateTelephoneNumber_incorrect_TEST() {
    try {
        // act & assert
        if (TelephoneNumber::ValidateTelephoneNumber("abcdefgh") == "abcdefgh") {
            throw std::exception();
        }
        std::cout << "PASSED " << __func__ << std::endl;
        return true;
    } catch (...) {
        std::cout << "FAILED " << __func__ << std::endl;
        return false;
    }
}

static bool TelephoneNumber_ostream_operator_TEST() {
    try {
        // act & assert
        TelephoneNumber telephone_number("+48888888");
        std::cout << telephone_number << std::endl;
        std::cout << "PASSED " << __func__ << std::endl;
        return true;
    } catch (...) {
        std::cout << "FAILED " << __func__ << std::endl;
        return false;
    }
}

int main () {
    std::cout << "TelephoneNumber test suite" << std::endl;
    const unsigned int total_tests = 5U;
    unsigned int passed_tests = 0U;
    unsigned int failed_tests = 0U;

    if (TelephoneNumber_create_TEST()) {
        passed_tests += 1U;
    } else {
        failed_tests += 1U;
    }
    if (TelephoneNumber_destroy_TEST()) {
        passed_tests += 1U;
    } else {
        failed_tests += 1U;
    }
    if (TelephoneNumber_ValidateTelephoneNumber_correct_TEST()) {
        passed_tests += 1U;
    } else {
        failed_tests += 1U;
    }
    if (TelephoneNumber_ValidateTelephoneNumber_incorrect_TEST()) {
        passed_tests += 1U;
    } else {
        failed_tests += 1U;
    }
    if (TelephoneNumber_ostream_operator_TEST()) {
        passed_tests += 1U;
    } else {
        failed_tests += 1U;
    }

    std::cout << "Tests ran: " << passed_tests + failed_tests << " out of " << total_tests << std::endl;
    std::cout << "Passed: " << passed_tests << ", " <<static_cast<double>(passed_tests)/static_cast<double>(total_tests)*100.0 << "% " << std::endl;
    std::cout << "Failed: " << failed_tests << ", " << static_cast<double>(failed_tests)/static_cast<double>(total_tests)*100.0 << "% " << std::endl;
}
