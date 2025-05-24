class Solution {
public:
    int mergeAndCount(vector<int>& arr, int left, int mid, int right) {
        int count = 0;
        vector<int> temp;
        int i = left, j = mid + 1;

        while (i <= mid && j <= right) {
            if (arr[i] <= arr[j]) {
                temp.push_back(arr[i++]);
            } else {
                temp.push_back(arr[j++]);
                count += (mid - i + 1);  // All remaining elements in left part are greater
            }
        }

        // Copy remaining elements
        while (i <= mid) temp.push_back(arr[i++]);
        while (j <= right) temp.push_back(arr[j++]);

        // Copy sorted elements back to original array
        for (int k = left; k <= right; ++k) {
            arr[k] = temp[k - left];
        }

        return count;
    }

    int mergeSort(vector<int>& arr, int left, int right) {
        if (left >= right) return 0;
        int mid = left + (right - left) / 2;
        int count = 0;

        count += mergeSort(arr, left, mid);
        count += mergeSort(arr, mid + 1, right);
        count += mergeAndCount(arr, left, mid, right);

        return count;
    }

    int inversionCount(vector<int>& arr) {
        return mergeSort(arr, 0, arr.size() - 1);
    }
};
