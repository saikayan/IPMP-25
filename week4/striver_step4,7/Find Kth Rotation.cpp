class Solution {
  public:
    int findKRotation(vector<int> &arr) {
            int n=arr.size();
            int ans=INT_MAX,index=-1;
            int low=0,high=n-1;
            while(low<=high)
            {
                int mid=(high+low)>>1;
                if(arr[low]<=arr[high])
                {
                    if(arr[low]<=ans)
                    {
                        ans=arr[low];
                        index=low;
                    }
                    break;
                }
                if(arr[low]<=arr[mid])
                {
                    if(arr[low]<=ans)
                    {
                        ans=arr[low];
                        index=low;
                    }
                    low=mid+1;
                }
                if(arr[mid]<arr[high])
                {
                    if(arr[mid]<=ans)
                    {
                        ans=arr[mid];
                        index=mid;
                    }
                    high=mid-1;
                }
            }
            return index;
    }
};