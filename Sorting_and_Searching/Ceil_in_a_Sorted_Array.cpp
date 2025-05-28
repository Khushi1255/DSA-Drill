class Solution {
  public:
    int findCeil(vector<int>& arr, int x) {
        // code here
        int n = arr.size();
        int lo = 0, hi = n - 1, res = -1;
    
        while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
  
        if (arr[mid] < x)
            lo = mid + 1;      
        else { // Potential ceiling found
            res = mid;   
            hi = mid - 1;
        }
    }
    return res;  
    }
};
