#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k,x;
    cin>>n>>m>>k;
    vector<int>a,b;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        a.emplace_back(x);
    }
    for(int i=0;i<m;i++)
    {
        cin>>x;
        b.emplace_back(x);
    }
     sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    int i = 0, j = 0, count = 0;
    
    while (i < n && j < m) {
        if (b[j] < a[i] - k) {
            j++;
        } else if (b[j] > a[i] + k) {
            i++;
        } else {
            count++;
            i++;
            j++;
        }
    }  
    cout << count;
    return 0;

}