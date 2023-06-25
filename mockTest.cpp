Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

#include <iostream>
#include <vector>
using namespace std;
void moveZeroes(vector<int>& nums) {
    int n = nums.size();
    int left = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] != 0) {
            nums[left] = nums[i];
            left++;
        }
    }
    for (int i = left; i < n; i++) {
        nums[i] = 0;
    }
}
void print(vector<int> nums){
    cout << "Output: [";
    for (int i = 0; i < nums.size(); i++) {
            cout << nums[i];
        if (i < nums.size() - 1) {
            cout << ",";
        }
    }
    cout << "]" << std::endl;
}
int main() {
    vector<int> nums = {0,1,0,0,0,3,12};
    moveZeroes(nums);
    print(nums);
    return 0;
}

First Unique Character in a String

#include <iostream>
#include <string>
using namespace std;
int uniqueCharacter(string s) {
  int char_count[256] = {0};
  for (int i = 0; i < s.length(); i++) {
    char_count[s[i]]++;
  }
  for (int i = 0; i < s.length(); i++) {
    if (char_count[s[i]] == 1) {
      return i;
    }
  }
  return -1;
}
int main() {
  string s = "leetcode";
  int index = uniqueCharacter(s);
  cout << index << endl;
  return 0;
}

