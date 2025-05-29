class Solution {
  public:
    // Function to find the minimum number of swaps required to sort the array.
    int minSwaps(vector<int>& arr) {
        // Code here
        int n = arr.size();
        vector<pair<int,int>>v;
        for(int i = 0;i<n;i++){
            v.push_back({arr[i],i});
        }
        sort(v.begin(),v.end());
        int swaps = 0;
        for(int i=0;i<n;i++){
            pair<int,int>p = v[i];
            int value = p.first;
            int index = p.second;
            if(i!=index){
                swaps++;
                swap(v[i],v[index]);
                i--;
            }
        }
        return swaps;
    }
};
