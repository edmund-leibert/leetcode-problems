// Time Complexity: O(n)
// Space Complexity: O(1)

#include <string>
#include <iostream>

std::string addBinary(std::string a, std::string b) {
    std::string binaryAns = "";
    int carry = 0;
    int maxSize = 0;
    int aDigit = 0;
    int bDigit = 0;
    
    if (a.size() > b.size()) {
      maxSize =  a.size(); 
    }
    else {
      maxSize = b.size();
    }
    
    for(int i = (maxSize - 1); i >= 0; i--) {
        if (i >= a.size()) {
            aDigit = 0;
        }
        else {
            aDigit = a[i] - '0';
        }

        if (i >= b.size()) {
            bDigit = 0;
        }
        else {
            bDigit = b[i] - '0';
        }
        
        //loop through max string + 1
        if (aDigit + bDigit + carry == 3) {
            binaryAns = "1" + binaryAns;
            carry = 1;
        }
        else if (aDigit + bDigit + carry == 2) {
            binaryAns = "0" + binaryAns;
            carry = 1;
        }
        else if (aDigit + bDigit + carry == 1) {
            binaryAns = "1" + binaryAns;
            carry = 0;
        }
        else {                         // a.currChar + bDigit + carry = 0
            binaryAns = "0" + binaryAns;
            carry = 0;
        }
        
        if( (i == 0) && (carry = 1) ){
            binaryAns = "1" + binaryAns;
        }
    }
    return binaryAns;
}

int main() {
  std::cout << addBinary("11", "1");
  return 0;
} 