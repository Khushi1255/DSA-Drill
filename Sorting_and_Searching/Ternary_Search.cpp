class Solution {
  public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    int ternarySearch(int arr[], int N, int K) {
        int left = 0, right = N-1;
        int result=-1;
        while(left<=right){
            int mid1 = left + (right-left)/3;
            int mid2 = right - (right-left)/3;
            if(arr[mid1]==K){
                return 1;
            }
            if(arr[mid2]==K){
                return 1;
            }
            if(K<arr[mid1]){
                right = mid1-1;
            }else if(K>arr[mid2]){
                left = mid2+1;
            }else{
                left = mid1+1;
                right = mid2-1;
            }
        }
        return -1;
    }
};
