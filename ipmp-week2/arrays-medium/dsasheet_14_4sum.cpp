class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int left=0,right=-1,count=0;
        int target=k;
        long long int sum=0;
        while(right!=nums.size())
        {
            if(sum<k)
            {
                right++;
                sum=sum+nums[right];
                
            }
            else if(sum>k)
            {
                sum=sum;
                sum=sum-nums[left];
                left++;
            }
            else
            {
                count++;
                sum=sum-nums[left];
                left++;
                
            }
        }
        return count;
    }
};