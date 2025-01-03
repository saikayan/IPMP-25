class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> mat;
       int n=matrix.size();
     for(int i=0;i<n;i++)
     {
        mat.push_back(matrix[i]);
        
     }   
          for(int i=0;i<n;i++)
     {
        for(int j=0;j<n;j++)
        {
            matrix[i][j]=mat[n-j-1][i];
        }
     }   
     
    }
};