class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int>f(26,0);
        vector<int>index(26,0);
        for(int i=0;i<tasks.size();i++)
        {
            f[tasks[i]-'A']++;
        }
        sort(f.begin(),f.end());
        int chunk = f[25] - 1;
        int idel = chunk * n;

        for(int i=24; i>=0; i--){
            idel -= min(chunk,f[i]);
        }

        return idel < 0 ? tasks.size() : tasks.size() + idel;
    }
};