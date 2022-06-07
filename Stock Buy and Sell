class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, mini = prices[0], temp = 0;
        int n = prices.size();
        for(int i=1; i<n; i++)
        {
            if(prices[i] < mini)
                mini = prices[i];
            temp = prices[i] - mini;
            profit = max(temp, profit);
        }        
        return profit;
    }
};
