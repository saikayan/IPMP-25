#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,count=0;
    cin>>n>>x;
    vector<int>p(n);
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }
    sort(p.begin(),p.end());
    int i=0,j=n-1;
    while(i<=j)
    {
        if(p[j]>=x)
        {
            count++;
            j--;
        }
        else if(p[j]+p[i]>x)
        {
            count++;
            j--;
        }
        else
        {
            count++;
            i++;j--;
        }
    }
    cout<<count;
}