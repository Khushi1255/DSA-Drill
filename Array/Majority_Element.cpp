class Solution {
public:
    int majorityElement(vector<int>& nums) {
      /*  int n=nums.size();
        int cnt=0;
        int candidate=nums[0];
        for(int i=0;i<n;i++){
            if(cnt==0){
                cnt++;
                candidate=nums[i];
            }else if(nums[i]==candidate){
                cnt++;
            }else{
                cnt--;
            }
        }
        return candidate;*/
        sort(nums.begin(), nums.end());
        int n=nums.size();
        return nums[n/2];
    }
};
