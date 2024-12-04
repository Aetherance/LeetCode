// 1423. 可获得的最大点数

class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        long long othermin,otherSum = 0;
        long long allSum = 0;
        int ok = cardPoints.size() - k;
        int beg = 0,end = beg + ok - 1;
        for(int i = beg;i<=end;i++)
            otherSum += cardPoints[i],allSum += cardPoints[i];
        othermin = otherSum;
        while(end + 1 < cardPoints.size())
        {
            otherSum += cardPoints[end + 1] - cardPoints[beg];
            othermin = min(othermin,otherSum);
            allSum += cardPoints[end+1];

            end ++,beg ++;
        }
        return allSum - othermin;
    }
};

// 逆向思维