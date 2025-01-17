#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long count=0,key=a[0];
    for(int i=0;i<n-1;i++)
    {
        if(a[i]>=a[i+1])
        {
            if(count==0)
            {
                key=a[i];
                count++;
            }
            else{
                if(key>=a[i])
                {
                    count++;
                    key=a[i];
                }
            }
        }
    }
    cout<<count+1;
}