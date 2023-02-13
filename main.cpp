#include <iostream>

#include "EncryptableString.h"

using namespace std;

int main()
{
    EncryptableString encryptableString;  // intance of class EncryptableString

    cout << "This is an Encryption program. Enter a string to encrypt: ";
    cin >> encryptableString;

    encryptableString.encrypt(encryptableString);   // function call
    cout << "Here is the encrypted string: " << encryptableString << endl;

    return 0;
}