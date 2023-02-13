#ifndef ENCRYPTABLESTRING_H_
#define ENCRYPTABLESTRING_H_

#include <string>
#include <vector>

class EncryptableString : public std::string
{
    public:
    EncryptableString() = default;      // default constructor
    EncryptableString(std::string userString) : std::string{userString} {}

    void encrypt(EncryptableString);        // prototype
};

#endif