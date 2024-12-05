// 3010. 将数组分成最小总代价的子数组 I
// 切蛋糕
#include<using.h>

class Solution {
public:
    int minimumCost(vector<int>& nums) {
        sort(nums.begin()+1,nums.end());
        return nums[0] + nums[1] + nums[2];
    }
};