// 1052. 爱生气的书店老板

class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        
        int Sum = 0;
        int left = 0,right = left + minutes - 1;
        for(int i = 0;i<customers.size();i++)
        {
            if(grumpy[i] == 0)Sum += customers[i];
            if(i>=left&&i<=right&&grumpy[i])Sum += customers[i];
        }
        int maxSum = Sum;
        
        while(right < customers.size()-1)
        {
            if(grumpy[left] == 1)
                Sum -= customers[left];
            if(grumpy[right+1] == 1)
                Sum += customers[right+1];

            maxSum = max(maxSum,Sum);
            left ++,right ++;
        } 
        return maxSum;
    }
};