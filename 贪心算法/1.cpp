// 最简单的贪心
// 3074. 重新分装苹果

class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int ans(0);
        int apples=reduce(apple.begin(),apple.end(),0);
        sort(capacity.begin(),capacity.end());
        for(int i=capacity.size()-1;i>=0;i--){
            ans++;
            if((apples-=capacity[i])<=0)break;
        }
        return ans;
    }
};