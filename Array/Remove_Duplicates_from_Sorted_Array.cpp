## 📝 LeetCode Solutions

| #  | Problem Name  | Solution  | Difficulty |
|----|--------------|-----------|------------|
| 1  | [REMOVE DUPLICATES FROM SORTED ARRAY](https://leetcode.com/problems/remove-duplicates-from-sorted-array/) | 🟢 Easy |

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int  i = 0; // pointer i initialize kiye
        int n = nums.size(); //size initialize kiye
        for(int j = 1; j<n; j++){  pointer j ko loop pe chalaye
          if(nums[j]!=nums[i]){
            nums[i+1] = nums[j]; 
            i++;
          }
       }
    return i+1;
 }     

  # TIME COMPLEXITY :- O(N)
  # SPACE COMPLEXITY :- O(1)
