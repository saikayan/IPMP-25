int second_largest(int *a,int n)
{
    if(n<2)
    return -1;
    int max=a[0];
    int second_max=a[0];
    for(int i=1;i<n;i++)
    {
        if(max<a[i])
        {
            second_max=max;
            max=a[i];
        }
         else if(a[i] > second_max && a[i] != max)
       {
          second_max = a[i];
       }
    }
    return second_max;
}

int second_smallest(int *a,int n)
{
    if(n<2)
    return -1;
    int min=a[0];
    int second_min=a[0];
    for(int i=1;i<n;i++)
    {
        if(min>a[i])
        {
            second_min=min;
            min=a[i];
        }
         else if(a[i] < second_min && a[i] != min)
       {
          second_min = a[i];
       }
    }
    return second_min;
}