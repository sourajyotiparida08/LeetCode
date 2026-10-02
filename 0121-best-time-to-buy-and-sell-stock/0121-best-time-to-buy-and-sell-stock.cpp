class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int maxprof = INT_MIN, minbuy = prices[0];
    for(int i=0; i<prices.size(); i++){
        minbuy = min(minbuy, prices[i]);
        int profit = prices[i] - minbuy;
        maxprof = max(profit, maxprof);
    }
    return maxprof;
    }
};