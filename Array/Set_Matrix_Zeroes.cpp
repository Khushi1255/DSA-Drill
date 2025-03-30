


class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();//row ka size
        int m=matrix[0].size();//col ka size
        int x=1;//declare of x
        int y=1;//declare of y
        for(int i=0;i<n;i++){//row marker
            if(matrix[i][0]==0) y=0;
        }
        for(int j=0;j<m;j++){//column marker
            if(matrix[0][j]==0) x=0;
        }
        //inner matrix---------------3x3 matrix wala
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        for(int i=1;i<n;i++){
            if(matrix[i][0]==0){
                for(int j=1;j<m;j++){
                    matrix[i][j]=0;//matrix ka saara cols zero hojaayega---j wala
                }
            }
        }
        for(int j=1;j<m;j++){
            if(matrix[0][j]==0){
                for(int i=1;i<n;i++){
                    matrix[i][j]=0;//matrix ka saara rows zero hojaayega---i wala
                }
            }
        }
        if(y==0){
            for(int i=0;i<n;i++){// 1st row
                matrix[i][0]=0;
            }
        }
        if(x==0){
            for(int j=0;j<m;j++){// 1st column
                matrix[0][j]=0;
            }
        }
    }
};
