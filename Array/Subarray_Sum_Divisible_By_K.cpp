class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
       int sum=0;
       int n = nums.size();
       vector<int>count(k,0);
       count[0]=1;
       int result =0;
       for(int i=0;i<n;i++){
           sum+=nums[i];
           result+=count[(sum%k + k)%k];
           count[(sum%k +k)%k]++;
       }
       return result;
    }
};
