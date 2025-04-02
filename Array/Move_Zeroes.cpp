class Solution {
public:
    void moveZeroes(vector<int>& a) {
      //taking two pointers i and j
      int j = 0;//j will traverse the values in an array one by one
      int n = a.size();
      for(int i=0;i<n;i++){ //------------O(N)
          if(a[i]!=0){  // if a[i] is not eqqual to 0, then swap the value
             swap(a[i],a[j]);
             j++;
            }
        }
    }
};
// TIME COMPLEXITY = O(N)
// SPACE COMPLEXITY = O(1)
