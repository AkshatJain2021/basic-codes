class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=INT_MAX;
        int profit=INT_MIN;
        int size=prices.size();
        for(int i=0;i<size;i++)
        {
            if(prices[i]<min)
            {
                min=prices[i];
            }
            int curprofit=prices[i]-min;
            if(curprofit>profit)
            {
                profit=curprofit;
            }
        }
        if(profit>0)
            return profit;
        else
            return 0;
    }
};