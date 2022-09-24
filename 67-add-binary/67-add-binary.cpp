// Time Complexity: O(n)
// Space Complexity: O(1)

#include <string>
#include <iostream>

std::string addBinary(std::string a, std::string b) {
  int aIter = a.length() - 1;
  int bIter = b.length() - 1;
  int maxStrLength = 0;
  int carry = 0;
  int aIterDigit = 0;
  int bIterDigit =  0; 

  if( a.length() > b.length() ) {
    maxStrLength = a.length() - 1;
  }
  else {
    maxStrLength = b.length() - 1;
  }

  std::string result = "";

  while(maxStrLength >= 0) {
    if ( aIter < 0 ) {
      aIterDigit = 0;
    }
    else {
      aIterDigit = static_cast<int>(a[aIter]) - '0';
    }
    if ( bIter < 0 ) {
      bIterDigit = 0;
    }
    else {
      bIterDigit = static_cast<int>(b[bIter]) - '0';
    }


    if ( (aIterDigit + bIterDigit + carry) == 3) {
      result = "1" + result;
      carry = 1;
    }
    else if ( (aIterDigit + bIterDigit + carry) == 2) {
      result = "0" + result;
      carry = 1;
    }
    else if ( (aIterDigit + bIterDigit + carry) == 1) {
      result = "1" + result;
      carry = 0;
    }
    else {
      result = "0" + result;
      carry = 0;
    }

    aIter--;
    bIter--; 
    maxStrLength--;

    if ( maxStrLength < 0) {
      if ( carry == 1 ) {
        result = "1" + result;
      }
    }

  }
  return result;
}

int main() {
  std::cout << addBinary("11", "1");
  return 0;
} 