#include "EncryptableString.h"

void EncryptableString::encrypt(EncryptableString encryptableString)
{
    std::string str = encryptableString;   // converts the object into a string
    std::string encryptedString;

 // creates vector derrived from char that runs through each character in str
    std::vector<char> charVector (str.begin(), str.end());

    for (unsigned int i = 0; i < charVector.size(); ++i)
    {
        switch (charVector.at(i))
        {
         // changes each char to the next character in the english alphabet
            default:
                charVector.at(i) += 1;
                break;
         // if 'z' is read in charVector, change it to 'a'
            case 'z':
                charVector.at(i) = 'a';
                break;
            case 'Z':
         // if 'Z' is read in charVector, change it to 'A'
                charVector.at(i) = 'A'; 
                break;
        }
    }

    for (char c : charVector)  // sets each encrypted character in a new string
        { encryptedString.push_back(c); }

 // reference to the object w/ the value of the encrypted string
    *this = encryptedString;
}