class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalgas=0,totalcost=0;
        for(int i=0;i<gas.size();i++)
        {
            totalgas+=gas[i];
            totalcost+=cost[i];
        }
        if(totalcost>totalgas)return -1;
        int current=0,ans=0;
        for(int i=0;i<gas.size();i++)
        {
            current+=gas[i]-cost[i];
            if(current<0)
            {
                current=0;
                ans=i+1;
            }
        }
        return ans;
    }
};