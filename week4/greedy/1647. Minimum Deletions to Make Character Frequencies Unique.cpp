class Solution {
public:
    int minDeletions(string s) {
        vector<int>f(26,0);
        int count=0;
        for(int i=0;i<s.length();i++)
        {
            f[s[i]-'a']+=1;
        }
        sort(f.begin(),f.end());
        for(int i=24;i>=0;i--)
        {
            if(f[i]==0)break;
            if(f[i]>=f[i+1])
            {
                int prev=f[i];
                f[i]=max(0,f[i+1]-1);
                count+=prev-f[i];
            }
        }
        return count;
    }
};