#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;long long count=0;
    cin>>n;
    vector<int>p(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }
    sort(p.begin(),p.end());
    int key=p[n/2];
    for(int i=0;i<n;i++)
    {
        count+=abs(p[i]-key);
    }
    cout<<count;
}