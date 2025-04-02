class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int buyPrice = prices[0];// initializing the costprice to the first element of array prices
      int profit = 0;  //initialize the profit
      int n = prices.size(); //initialize the size of an array
      for(int i=1;i<n;i++){  //traversing the array from 1st position to the nth position
          if(buyPrice>prices[i]){  //if costprice is greater than to the value of the array
             buyPrice = prices[i]; // then equate THE COST PRICE to that value of the array prices
          }
          return profit;
       }
    }
}
//TIME COMPLEXITY ---> O(N)
//SPACE COMPLEXITY ---O(1)
