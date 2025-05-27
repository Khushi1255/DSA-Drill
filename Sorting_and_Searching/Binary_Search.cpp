class Solution {
  public:
    int binarysearch(vector<int> &arr, int k) {
        int n = arr.size();
        int left = 0, right = n - 1;
        int result = -1; // Store the index of the first occurrence

        while (left <= right) {
            int mid = left + (right - left) / 2; // Avoid overflow
            if (arr[mid] == k) {
                result = mid; // Update result and search in the left half
                right = mid - 1;
            } else if (arr[mid] < k) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return result; // -1 if not found
    }
};
