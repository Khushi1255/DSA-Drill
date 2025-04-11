class Solution {
public:
    bool canJump(vector<int>& nums) {
       int n = nums.size();
       int reachable = 0;
       for(int i=0;i<n;++i){
        if(reachable<i) return false;
        reachable=max(reachable, i+nums[i]);
       } 
       return true;

       //2nd method
       int reach = nums[0];
       for(int i=0;i<nums.size();++i){
        if(reach>=nums.size()-1) return true;
        if(nums[i]==0 and reach==i) return false;
        if(i+nums[i]> reach) reach=i+nums[i];
       }
       return true;
    }
};
