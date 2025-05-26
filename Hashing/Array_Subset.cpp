class Solution {
  public:
    // Function to check if b is a subset of a
    bool isSubset(vector<int> &a, vector<int> &b) {
        // Your code here
         int n = a.size();
        int m = b.size();
        // Create a unordered map to store the frequency of elements in a
        unordered_map<int, int> mp;

        // Count the frequency of elements in a
        for (int i = 0; i < n; i++) {
            mp[a[i]]++;
        }

        int count = 0;

        // Iterate through the elements in b
        for (int i = 0; i < m; i++) {
            // If the element is present in a, increment the count
            if (mp[b[i]] > 0) {
                mp[b[i]]--;
            } else {
                return false;
            }
        }
        return true;
    }
};
