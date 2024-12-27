int pivotIndex(int* nums, int numsSize) {
    int r=0,l=0,t=0;
    for(int i=0;i<numsSize;i++)
    {
        t=t+nums[i];
    }
    l=t-nums[0];
    int p=-1;
    for(int i=0;i<numsSize;i++)
    {
        if(r==l)
        {
            p=i;
            break;
        }
        if(i!=numsSize-1){
        r=r+nums[i];
        l=l-nums[i+1];}
    }
    return p;
}
