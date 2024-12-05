// 1005. K 次取反后最大化的数组和
// 虽然长 但是不慢

#include"using.h"

class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int sum = 0;
        if(k>=nums.size())
        {
            for(int i = 0;i<nums.size();i++)
            {
                if(nums[i]<0)
                {
                    nums[i] = -nums[i];
                    k--;
                }
                sum += nums[i];
            }    
            sort(nums.begin(),nums.end());    
            k%=2;
            if(k==1)
                sum-=2*nums[0];
            
            return sum;
        }
        
        for(int i = 0;i<nums.size();i++)
        {
            if(k == 0)
            {
                for(int j = i;j<nums.size();j++)
                    sum += nums[j];
                break;
            }
            if(nums[i]<0)
            {
                nums[i] = -nums[i],k--;
                sum += nums[i];
                continue;
            }
            if(nums[i]>=0)
            {
                k%=2;
                if(k==1)
                {
                    k--;
                    nums[i] = -nums[i];
                }
                sum += nums[i];
                continue;
            }
        }
        return sum;
    }
};