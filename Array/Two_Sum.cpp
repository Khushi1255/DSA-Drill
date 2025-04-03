class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      int n = nums.size(); //initialize the size of an array
      for(int i=0;i<n;i++){ //taking 1st pointer on an array nums
         for(int j=i+1;j<n;j++){ //taking 2nd pointer on an array after the pointer i
             if(nums[i]+nums[j]==target){ //if sum of 2 pointers value iss equal to the target
                return {i,j}; // return the indices of that values on that pointers
              }
          }
      }
      return {};
    }
};

//TIME COMPLEXITY-------------->O(N*N)
//SPACE COMPLEXITY----------------->O(1)
