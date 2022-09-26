#include <iostream>
#include <bits/stdc++.h>

vector<int> twoSum(vector<int>& nums, int target) {
    std::vector<int> ans; 
    bool done = false;
    for(int operandAIter = 0; operandAIter < nums.size() - 1; operandAIter++) {
        for(int operandBIter = 0; operandBIter < nums.size() - 1; operandBIter++) {
            if (operandBIter == operandAIter) {
                continue;
            }
            else {
                if(target == (nums[operandAIter] + nums[operandBIter])) {
                    ans.push_back(operandAIter);
                    ans.push_back(operandBIter);
                    sort(ans.begin(), ans.end());
                    done = true;
                    break;
                }
                else {
                    continue;
                }
            }
        }
        if(done) {
            break;
        }
    }
    return ans;
}

int main() {
  std::vector<int> testVec = {3,2,4};
  auto result = twoSum(nums,6);
  std::cout << result << std::endl;
  return 0;
}