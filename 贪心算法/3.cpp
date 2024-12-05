// 1833. 雪糕的最大数量

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int hash[100005] = {0};
        for (auto& c : costs) {
            hash[c]++;
        }
        int ret = 0;
        for (int i = 1; i < 100005; i++) {
            if (coins < i)
                break;
            int tmp = min(coins / i, hash[i]);
            coins -= tmp * i;
            ret += tmp;
        }
        return ret;
    }
};