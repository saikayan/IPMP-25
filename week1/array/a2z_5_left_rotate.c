#include<stdio.h>
void left_rotate(int *a,int n)
{
    if(n<2)
    return;
    int temp=a[0];
    for(int i=0;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    a[n-1]=temp;
}
int main()
{
    int a[]={1,2,3,4,5,6};
    left_rotate(a,6);
    for(int i=0;i<6;i++)
    {
        printf("%d ",a[i]);
    }
}