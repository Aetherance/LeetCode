/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int * p = (int *)malloc(100000);
    int count = 0;
    for(int i = 0;i<numsSize;i++)
    {
        for(int j = 0;j<numsSize;j++)
        {
            if(nums[j]+nums[i] == target)
            {
                p[count++] = j;
            }
        }
    }
    *returnSize = count;
}