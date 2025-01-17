 class solution{ public:
    int countFreq(vector<int>& nums, int target) {
        vector<int>ans(2,-1);
        int low=0,high=nums.size()-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(target==nums[mid])
            {
                if(mid==0||(mid>0&&nums[mid-1]!=target))
                {
                    ans[0]=mid;
                    break;
                }
                else
                {
                    high=mid-1;
                }
            }
            else if(target>nums[mid])
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        low=0;high=nums.size()-1;
            while(low<=high)
        {
            int mid=(low+high)/2;
            if(target==nums[mid])
            {
               
                if(mid==nums.size()-1||(mid<nums.size()-1&&nums[mid+1]!=target))
                {
                    ans[1]=mid;
                    break;
                }
                else
                {
                    low=mid+1;
                }
            }
            else if(target>nums[mid])
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        if(ans[1]==-1||ans[0]==-1)return 0;
        return ans[1]-ans[0]+1;
    }
};