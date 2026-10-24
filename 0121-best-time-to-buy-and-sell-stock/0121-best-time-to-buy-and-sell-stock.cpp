class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrices = prices[0];
        int profit = 0;

        for(int i = 1; i < prices.size(); i++){
            profit = max(profit,prices[i] - minPrices);
            minPrices = min(minPrices, prices[i]);
        }

        return profit;
    }
};