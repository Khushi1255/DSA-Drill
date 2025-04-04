class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();// initialize the size of an array
        int i = 0;//1st pointer
        int j = n - 1;//2nd pointer
        int maxWater=0;//taking the variable of maximum water stored
        while (i < j) { //if 1st pointer is less than 2nd pointer
            int w = j - i; //then subtract j-i
            int h = min(height[i], height[j]); //taking the minimum height between the two poiters which is been compared
            int area = w * h; //calculating the area
            maxWater=max(maxWater, area); //now takingg the maximum value from maxWater and area
            if (height[i] > height[j]) { //if height of 1st pointer is greater
                j--;//decrease the 2nd pointer height
            } else {
                i++; //eelse increase the height of 1st pointer
            }
        }
        return maxWater;//return the maxWater value at last
    }
};
