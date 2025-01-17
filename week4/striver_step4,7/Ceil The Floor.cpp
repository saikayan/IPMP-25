class Solution {
  public:
  
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        int f=-1,c=-1,a=INT_MIN,b=INT_MAX;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]<=x)
            {
                a=max(a,arr[i]);
            }
            if(arr[i]>=x)
            {
                b=min(b,arr[i]);
            }
        }
        vector<int>ar(2);
        if(a==INT_MIN)ar[0]=-1;else ar[0]=a;
        if(b==INT_MAX)ar[1]=-1;else ar[1]=b;
        return ar;
    }
};