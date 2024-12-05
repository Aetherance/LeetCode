// 1403. 非递增顺序的最小子序列

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        vector<int>ret;
        int count = 0;
        sort(nums.begin(),nums.end());
        int sum = 0,lsum = 0;
        for(int i = 0;i<nums.size();i++)
            sum += nums[i];
        for(int i = nums.size()-1;i>=0;i--)
        {
            lsum += nums[i];
            ret.push_back(nums[i]);
            if(sum-lsum<lsum)
                break;
        }
        return ret;
    }
};