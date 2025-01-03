#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    unordered_set <int> s;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        s.insert(x);
    }
    cout<<s.size();
    return 0;
}