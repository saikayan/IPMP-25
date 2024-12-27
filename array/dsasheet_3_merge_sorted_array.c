void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
   
    for(int k=0;k<m;k++)
    {
        nums1[nums1Size-k-1]=nums1[m-1-k];
    }
     int i=nums1Size-m,j=0,k=0;
    while(i<nums1Size&&j<n)
    {
        if(nums1[i]<=nums2[j])
        {
            nums1[k++]=nums1[i++];
        }
        else
        {
            nums1[k++]=nums2[j++];
        }
    }
    while(i<nums1Size)
    {
         nums1[k++]=nums1[i++];
    }
     while(j<n)
    {
         nums1[k++]=nums2[j++];
    }
}
