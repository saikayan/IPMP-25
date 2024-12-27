#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(int* nums, int numsSize) {
    int a[numsSize];
    int j=0;
    a[0]=nums[0];
    for(int i=1;i<numsSize;i++)
    {
        if(a[j]!=nums[i])
        {
            j++;
            a[j]=nums[i];
        }
    }
    int k=j+1;
    for(int i=0;i<k;i++)
    {
        nums[i]=a[i];
    }
    return k;
}
