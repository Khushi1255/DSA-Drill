class Solution {
  public:
    bool canPair(vector<int> &arr, int k) {
         int n = arr.size();
    
    // An odd length array cannot be divided
    // into pairs
    if (n % 2 != 0)
        return false;

    // Create a frequency map to count occurrences
    // of all remainders when divided by k.
    unordered_map<int, int> freq;

    // Count occurrences of all remainders
    for (int x : arr)
        freq[((x % k) + k) % k]++;

    // Traverse the array and check pairs
    for (int x : arr) {
        int rem = ((x % k) + k) % k;

        // If remainder divides k into two halves
        if (2 * rem == k) {
            if (freq[rem] % 2 != 0)
                return false;
        }
      
        // If remainder is 0, there must be an even count
        else if (rem == 0) {
            if (freq[rem] % 2 != 0)
                return false;
        }
      
        // Else occurrences of remainder and 
        // k - remainder must match
        else if (freq[rem] != freq[k - rem])
            return false;
    }
    return true;
    }
};
