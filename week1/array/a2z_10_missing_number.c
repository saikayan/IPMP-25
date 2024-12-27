#include<stdio.h>
int missing(int *a,int n)
{
    int sum=0;
    for(int i=0;i<n-1;i++)
    {
        sum=sum+a[i];
    }
    return sum-((n*(n+1))/2);
}