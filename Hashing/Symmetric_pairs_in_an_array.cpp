#include <bits/stdc++.h>
using namespace std;
// Function to find symmetric pairs
vector<vector<int>> findSymmetricPairs(vector<vector<int>>& arr) {
    int n = arr.size();
    vector<vector<int>> result;
    // HashMap to store pairs
    unordered_map<int, int> hash;
    // Traverse all pairs
    for (int i = 0; i < n; i++) {
        int first = arr[i][0];
        int second = arr[i][1];

        // If reverse pair exists in hash, it's symmetric
        if (hash.find(second) != hash.end() && 
            hash[second] == first) {
            result.push_back({second, first});
        } else {
            // Store the current pair in hash
            hash[first] = second;
        }
    }
    return result;
}
// Function to print a 2D array
void print2dArray(vector<vector<int>>& arr) {
    for (auto& pair : arr) {
        cout << "[" << pair[0] << ", " << pair[1] << "] ";
    }
    cout << endl;
}
// Driver Code
int main() {
    vector<vector<int>> arr = {{5, 8}, {7, 9}, {8, 5}, {9, 7}, {6, 10}};
    vector<vector<int>> result = findSymmetricPairs(arr);
    print2dArray(result);
    return 0;
}
