class Solution {
public:
    vector<vector<int>> uniquePerms(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // Sort to start with smallest lexicographic permutation
        set<vector<int>> s; // To store unique permutations

        do {
            s.insert(nums); // Insert current permutation into the set
        } while (next_permutation(nums.begin(), nums.end())); // Get next permutation

        // Convert set to vector
        vector<vector<int>> result(s.begin(), s.end());
        return result;
    }
};
