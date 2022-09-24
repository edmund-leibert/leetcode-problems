#include <iostream>
#include <string>
#include <cmath>

std::string decToBin(int decimal) {
  std::string binary;
  while(decimal > 0) {
    binary = std::to_string(decimal % 2) + binary;
    decimal /= 2;
  }

  return binary;
}
  
int binToDec(std::string binary) {
    int result = 0;
    std::string binDigit = "";
    int binExponent = 0;
    for(int i = binary.size() - 1; i >= 0; i--) {
      binDigit = binary.at(i);
      result = result + std::stoi(binDigit) * (std::pow(2,binExponent));
      binExponent++;
    }  
    return result;
  }

int concatenatedBinary(int n) {
  std::string nCountBin = "";

  // iterate  through n and convert each integer to a binary
  //    *Going need a binary to decimal function
  for(int nCount = 1; nCount <= n; nCount++) {
    //  *concaenate the new binary string to final binary string  
    nCountBin = nCountBin + decToBin(nCount);
  } 

  // final binary string
  // convert final binary string to answer
  return binToDec(nCountBin);
}

int main() {
  std::cout << concatenatedBinary(3);
  return 0;
} 