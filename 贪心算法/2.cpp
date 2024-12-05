// 2279. 装满石头的背包的最大数量

class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        for(int i = 0;i<capacity.size();i++)
        {
            capacity[i] -= rocks[i];
        }        
        sort(capacity.begin(),capacity.end());
        
        int count = 0;
        
        for(int i = 0;i<capacity.size();i++)
        {
            additionalRocks -= capacity[i];
                count++;
            if(additionalRocks<=0)
                break;
        }
        if(additionalRocks<0)
        count --;
        return count;
    }
};