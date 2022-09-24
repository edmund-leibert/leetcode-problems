// Time complexity: O(n)
// Space complexity: O(1)

#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <algorithm>

bool isVowel(char c) {
    char vowels [] = {'A' , 'E' , 'I' , 'O' , 'U' , 'a' , 'e' , 'i' , 'o' , 'u'};
    int i = 0;
    while(i < sizeof(vowels) ) {
      if ( c == vowels[i] ) {
          return true;
      }
      else {
          i++;
      }
    }
    return false;
}

std::string reverseVowels(std::string s) {
    std::string result = s;
    // Create a left pointer and set to beginning
    int leftPos = 0;
    int rightPos = s.length() - 1;
    std::string::iterator leftIter = result.begin();
    // // Create a right pointer and set to end
    std::string::iterator rightIter = result.end() - 1;
    
    while ( leftPos <= rightPos ) {
        if ( isVowel(*leftIter) ) {
            if ( isVowel(*rightIter) ) { 
                std::iter_swap(leftIter,rightIter);
                leftIter++, leftPos++;
                rightIter--,rightPos--;
            }
            else {
                rightIter--,rightPos--;
            }
        }
        else {
            leftIter++, leftPos++;
        }
    }
    
    // while left pointer pos <= right pointer
    //     left pointer char is vowel
    //         no increment
    //         if right pointer char is vowel
    //             no increment
    //             swap
    //             increment left
    //             increment
    //         else
    //             increment right 
    //     else
    //         increment left
    
    return result;
}

int main() {
  std::string s = "hellopqza";
  std::string a = reverseVowels(s);
  std::cout << a;
}            