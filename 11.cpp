#include <iostream>
#include <cstring> // 用于使用 strlen 函数
#include <cctype>  // 用于使用 isxdigit 函数

int parseHex(const char* const hexString) {
    int length = strlen(hexString);
    int decimal = 0;

    for (int i = 0; i < length; ++i) {
        char current = std::toupper(hexString[i]);

        if (!std::isxdigit(current)) {
            return -1;
        }

        int digitValue;
        if (std::isdigit(current)) {
            digitValue = current - '0';
        }
        else {
            digitValue = 10 + (current - 'A');
        }

        decimal = decimal * 16 + digitValue;
    }

    return decimal;
}

int main() {
    const char* hexString = "A5"; 
    int decimalValue = parseHex(hexString);

    if (decimalValue != -1) {
        std::cout << "Hexadecimal: " << hexString << " converts to Decimal: " << decimalValue << std::endl;
    }
    else {
        std::cout << "Invalid hexadecimal string." << std::endl;
    }

    return 0;
}
