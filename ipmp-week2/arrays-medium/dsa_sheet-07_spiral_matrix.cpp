class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> visited;
        int top=0,bottom=matrix.size()-1,left=0,right=matrix[0].size()-1;
        while(top<=bottom&&left<=right)
        {
            for(int i=left;i<=right;i++)
            {
                visited.push_back(matrix[top][i]);
            }
            top++;
            for(int i=top;i<=bottom;i++)
            {
                visited.push_back(matrix[i][right]);
            }
            right--;
             if (top <= bottom) {
                for (int j = right; j >= left; j--) {
                    visited.push_back(matrix[bottom][j]);
                }
                bottom--;
            }
             if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    visited.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return visited;
    }
};