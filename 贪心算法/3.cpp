// 1833. 雪糕的最大数量

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int count = 0;
        for(int i = 0;i<costs.size();i++)
        {
            coins -= costs[i];
            count ++;
            if(coins <= 0)
                break;
        }
        if(coins<0)
            count --;
        return count;
    }
};