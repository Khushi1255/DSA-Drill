class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
      sort(a.begin(), a.end());
      int start = 0, end = 0; // initialize the first and last position of an array
      //largest no of chocolates
      int mind = INT_MAX;
      //find the subarray of size m s.t difference b/w last and first elements of subarray is minimuum
      for(int i = 0;i+m-1<a.size();i++){ //'m' is the number of students
          int diff = a[i+m-1] - a[i];
          if(mind>diff){
             mind = diff;
             start = i;
             end = i+m-1;
          }
      }
      return a[end] - a[start];
    }
};

//TIME COMPLEXITY --->O(NlogN)
//SPACE COMPLEXITY ----->O(1)
