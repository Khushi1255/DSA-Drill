class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
      int n = nums.size();//size of an array
      vector<vector<int>>ans;//vector to store answer
      sort(nums.begin(), nums.end());//sorting the array
      for(int i=0;i<n;i++){ //loop for 1st number in an array
         if(i>0 && nums[i]==nums[i-1]) continue;// same digit in an array then continue
         int j=i+1;
         int k=n-1;
      while(j<k){
          int sum = nums[i]+nums[j]+nums[k];//total sum
          if(sum<0){//if sum is -ve then increase j
             j++;
          }else if(sum>0){//if sum is +ve then decrease k
             k--;
          }else{
            ans.push_back(nums[i],nums[j],nums[k]);//push the ans in the vector
               j++;k--;
            while(j<k && nums[j]==nums[j-1]) j++;//if thhe value of j in the array is same then increment the value oj in an array and move forward
            }
         }
      }
    return ans;
   }
};

              
