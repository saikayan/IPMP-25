#include<stdio.h>
int once(int *a,int n)
{
    int key=0;
    for(int i=0;i<n;i++)
    {
        key=key^a[i];
    }
    return key;
}