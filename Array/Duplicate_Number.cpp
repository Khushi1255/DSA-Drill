## 📝 LeetCode Solutions

| #  | Problem Name  | Solution  | Difficulty |
|----|--------------|-----------|------------|
| 1  | [DUPLICATE NUMBER](https://leetcode.com/problems/find-the-duplicate-number/) | 🔵 Medium |

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
      int slow = nums[0]; //at start position
      int fast = nums[0]; //at start position
      slow = nums[slow];  //only 1 step
      fast = nums[nums[fast]]; // only 2 step
      while(slow!=fast){  // 1st POI
           slow = nums[slow];  //only 1 step ahead
           fast = nums[nums[fast]];  //only 2 step ahead
      }
      fast = nums[0];   //again initializes fast to '0'
      while(slow!=fast){ //2nd POI
           slow = nums[slow];  // 1 step ahead
           fast = nums[fast];   //1 step ahead
      }
      return slow;
    }
}
