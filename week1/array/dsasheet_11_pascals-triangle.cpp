#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>a;
        for(int i=0;i<numRows;i++)
        {
            a.push_back(vector<int>(i+1,1));
        }
        for(int i=2;i<numRows;i++)
        {
            for(int j=1;j<a[i].size()-1;j++)
            {
                a[i][j]=a[i-1][j-1]+a[i-1][j];
            }
        }
        return a;
    }
};
