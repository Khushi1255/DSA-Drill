class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int lSum=0;
        int rSum=0;
        int maxSum=0;
        for(int i=0;i<k;i++){
            lSum+=cardPoints[i];
            maxSum=lSum;
        }
        int right = n-1;
        for(int l=k-1;l>=0;l--){
            lSum=lSum-cardPoints[l];
            rSum=rSum+cardPoints[right];
            right=right-1;
            maxSum=max(lSum+rSum,maxSum);
        }
        return maxSum;
    }
};/////////////TIME COMPLEXITY-------------->O(N)
///////////////SOACE COMPLEXITY---------------->O(1)
