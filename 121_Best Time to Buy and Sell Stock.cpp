class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int min_price = prices[0];
        for(int i = 0; i < prices.size() ; i++){
            if(min_price > prices[i]){
                min_price = prices[i];
            }else{
                profit = max(profit, prices[i] - min_price);
            }
        } 
        return profit;
    }
};
