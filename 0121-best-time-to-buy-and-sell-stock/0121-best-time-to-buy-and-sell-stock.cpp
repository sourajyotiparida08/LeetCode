class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int minPrice = prices[0], maxProf = INT_MIN;
       for(int i=0; i<prices.size(); i++){
        minPrice = min(minPrice, prices[i]);
      int  profit = prices[i] - minPrice;
        maxProf = max(maxProf, profit);
       }
        return maxProf;
    }
};