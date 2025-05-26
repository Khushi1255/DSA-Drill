class Solution {
  public:
    int maxLen(vector<int> &arr) {
        // Your code here
        int n = arr.size();
        // Creating a hashmap to store the sum as key and index as value
        unordered_map<int, int> hM;

        // Initializing variables
        int sum = 0;
        int max_len = 0;
        int ending_index = -1;

        // Converting all 0s to -1s in the input array
        for (int i = 0; i < n; i++)
            arr[i] = (arr[i] == 0) ? -1 : 1;

        // Traversing through the array
        for (int i = 0; i < n; i++) {
            // Updating the sum
            sum += arr[i];

            // Checking if the sum is equal to 0
            if (sum == 0) {
                max_len = i + 1;  // Updating the maximum length
                ending_index = i; // Updating the ending index
            }

            // Checking if the sum+n exists in the hashmap
            if (hM.find(sum + n) != hM.end()) {
                // Updating the maximum length and ending index if necessary
                if (max_len < i - hM[sum + n]) {
                    max_len = i - hM[sum + n];
                    ending_index = i;
                }
            } else
                hM[sum + n] = i; // Storing the sum+n and its index in the hashmap
        }

        // Returning the maximum length
        return max_len; 
    }
};
