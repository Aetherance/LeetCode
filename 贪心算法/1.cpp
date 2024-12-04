// 最简单的贪心
// 3074. 重新分装苹果

class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int minCountChest = 0,sum = 0;
        for(int i = 0;i<apple.size();i++)
            sum += apple[i];
        sort(capacity.begin(),capacity.end());
        for(int i = capacity.size()-1;i>=0;i--)
        {
            sum-= capacity[i];
            minCountChest ++;

            if(sum<=0)break;
        }
        return minCountChest;
    }
};