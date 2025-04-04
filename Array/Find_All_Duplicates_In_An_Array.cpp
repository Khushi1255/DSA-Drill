// THERE ARE 3 SOLUTION BELOW
//------------------FIRST SOLUTION-------------------------
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
      int n = nums.size();
      vector<int>ans;
      for(int i = 0;i < n;i++){
         if(nums[i] == nums[i-1]){
            ans.push_back(nums[i]);
         }
      return ans;
    }
};/////////TIME COMPLEXITY------->O(N)
  /////////SPACE COMPLEXITY------->O(N)


//-----------------------SECOND SOLUTION-------------------------
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
      int n = nums.size();
      vector<int>ans;
      for(int i =0;i<n;i++){
          for(int j=i+1;j<n;j++){
              if(nums[i]!=nums[j]){
                  continue;
              }else{
                  ans.push_back(nums[i]);
              break;
              }
          }
      }
      return ans;
    }
};  ////////////////TIME COMPLEXITY->O(N*N)
    ////////////////SPACE CCOMPLEXITY->O(1)


//------------------THIRD SOLUTION-----------------
class Solution {
public:
    vector<int> findDuplicates(vector<int>&v) {
         int n = v.size();
        vector<int>ans;
        for(int i=0;i<n;i++) {
            if(v[abs(v[i])-1]<0) {
                ans.push_back(abs(v[i]));
                continue;
            }
            v[abs(v[i])-1]*=-1;
        }
        return ans;
    }
}; //////////////TIME COMPLEXITY -------> O(N)
   /////////////SPACE COMPLEXITY -------> O(1)
