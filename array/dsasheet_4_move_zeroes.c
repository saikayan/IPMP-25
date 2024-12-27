void moveZeroes(int* a, int numsSize) {
    void swap(int *x,int *y)
    {
        int temp=*x;
        *x=*y;
        *y=temp;
    }
    int i=0,j=0;
    while(i<numsSize)
    {
        if(a[i])
        {
            swap(&a[i],&a[j]);
            j++;
        }
        i++;
    }
}
