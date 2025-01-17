#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,flag=0;
    cin>>n>>x;
    vector<int>a(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    unordered_map<int, int> pairIdx;
        for (int i = 0; i < n; ++i) {
            int num = a[i];
            if (pairIdx.find(x - num) != pairIdx.end()) {
                cout<<pairIdx[x - num]+1<<" "<<i+1;
                flag=1;
                break;
            }
            pairIdx[num] = i;
        }
    if(!flag)
    {
        cout<<"IMPOSSIBLE\n";
    }
}
