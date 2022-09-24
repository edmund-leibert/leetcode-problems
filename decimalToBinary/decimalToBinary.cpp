#include <iostream>
#include <string>

std::string decimalToBinary(int decimal);

int main() {
  std::string ans = decimalToBinary(37);

  return 0;
}

std::string decimalToBinary(int decimal) {
    std::string binary = "";
    while (decimal > 0)
    {
        binary = std::to_string(decimal % 2) + binary;
        decimal /= 2;
    }
    return binary;
}