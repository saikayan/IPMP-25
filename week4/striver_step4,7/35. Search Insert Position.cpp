class Solution {
public:
    int searchInsert(vector<int>& nums, int x) {
        int low=0,high=nums.size()-1,ans=0;
        while (low <= high) {
        int mid = (low + high) / 2;
        if (nums[mid] >= x) {
            ans = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1; 
        }
    }
    if(low==nums.size())ans=nums.size();
    return ans;
    }
};