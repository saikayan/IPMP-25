#include<stdio.h>
int search(int *a,int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(key==a[i])
        return i;
    }
    return -1;
}