class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if(intervals.size()==1)return 0;
        int count=0;
        std::sort(intervals.begin(), intervals.end(), [](const std::vector<int>& a, const std::vector<int>& b) {
    return a[1] < b[1];
});

    int i=0,j=1;
    while(i<intervals.size()&&j<intervals.size())
    {
        if(intervals[i][1]>intervals[j][0])
        {
            count++;
            j++;
        }
        else 
        {
            i=j;
            j++;
        }
    }
    return count;
    }
};