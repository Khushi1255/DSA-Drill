

class Solution {
public:
    void sortColors(vector<int>& nums) {
      int n = nums.size();
      for(int i = 0;i < n-1;i++){
          for(int j = i+1;j<n;j++){
          if(nums[i] > nums[j]){
             int temp = nums[i];
             nums[i] = nums[j];
             nums[j] = temp;
          }
        }
     }
  }
}

TIME COMPLEXITY :-  O(N*N)
SPACE COMPLEXITY :- O(1)
 //////// OR ////////////
  /* int n = nums.size();
        sort(nums.begin(), nums.end()); */
