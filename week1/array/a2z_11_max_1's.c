#include<stdio.h>
int max_1(int *a,int n)
{
    int max=0,count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i])
        {
            count++;
        }
        else{
            max=count>max?count:max;
            count=0;
        }
    }
    return count>max?count:max;
}