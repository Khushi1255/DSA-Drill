class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int start;
        int mid;
        int end;
        for(int i=0;i<matrix.size();i++){
            if(matrix[i][matrix[i].size()-1]==target)
            return true;
            if(matrix[i][0]==target)
            return true;
            if(matrix[i][matrix[i].size()-1]>target){
                for(int j=0;j<matrix[i].size();j++){
                    if(matrix[i][j]==target)
                    return true;
                }
            }
        }
        return false;
    }
};
