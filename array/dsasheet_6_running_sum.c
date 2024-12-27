int* runningSum(int* nums, int numsSize, int* returnSize) {
    *returnSize=numsSize;
    int *a=(int *)malloc(numsSize*sizeof(int ));
    a[0]=nums[0];
     for(int i=1;i<numsSize;i++)
    {
       a[i]=nums[i]+a[i-1];
    }
    return a;
}
