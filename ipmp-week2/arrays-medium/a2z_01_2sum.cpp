
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *a = malloc(2*sizeof(int));
    *returnSize = 2;
    for(int i=0; i < numsSize-1; i++){
        for(int j=i+1; j < numsSize; j++){
            if(nums[i] + nums[j] == target){
                a[0] = i; a[1] = j;
                return a;
                }
            }
        }
     return a;           
}