class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit = 0;
        int minn = prices[0];
        for(int i =0; i<prices.size(); i++){
            int cost = prices[i]-minn;
            maxprofit = max(maxprofit,cost);
            minn = min(minn, prices[i]);
        }
       return maxprofit;
    }
};