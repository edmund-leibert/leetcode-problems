// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
#include <string>
#include <cmath>

  int binLength(int binary) {  // Most optimized way
    int LeadingZeros = __builtin_clz(binary);
    return 32 - LeadingZeros;
  }
  
  int concatenatedBinary(int n) {
    long oneBinary = 1;
    const int MODULO = 1e9 + 7;
    for(int i = 2; i <= n; i++) {
      oneBinary = ((oneBinary << binLength(i)) % MODULO) + i;
      oneBinary = oneBinary % MODULO; 
    }
    
    return oneBinary;
  }

int main() {
  std::cout << concatenatedBinary(3);
  return 0;
} 