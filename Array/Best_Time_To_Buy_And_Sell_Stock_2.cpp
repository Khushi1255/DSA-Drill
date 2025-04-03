// using GREEDY ALGORITHM APPROACH
class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int max = 0;
      int n = prices.size();
      int start = prices[0];
      for(int i=1;i<n;i++){
          if(start<prices[0]){
             max+=prices[i] - start;
            }
            start = prices[i];
        }
        return max;
    }
};
//Time complexity--------------->O(N)
//Space Complexity--------------->O(1)
             
