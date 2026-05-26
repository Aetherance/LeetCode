double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int * nums = (int *)malloc((nums1Size+nums2Size)*sizeof(int)),count = 0;
    for(int i = 0;i<nums1Size;i++)
        nums[count++] = nums1[i];
    for(int i = 0;i<nums2Size;i++)
        nums[count++] = nums2[i];
    sort(nums,nums+nums1Size+nums2Size);
    if((nums1Size+nums2Size)%2)
    {
        return nums[(nums1Size+nums2Size)/2];
    }
    return (nums[(nums1Size+nums2Size)/2]+nums[(nums1Size+nums2Size)/2+1])/2.0;
}