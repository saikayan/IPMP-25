class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int i=0,j=0,count=0;
        while(i<neededTime.size()&&j<neededTime.size())
        {
            int totaltime=0;
            int maxi=neededTime[i];
            while(j<neededTime.size()&&colors[i]==colors[j])
            {
                totaltime+=neededTime[j];
                maxi=max(maxi,neededTime[j]);
                j++;
            }
            count+=totaltime-maxi;
            i=j;
        }
        return count;
    }
};