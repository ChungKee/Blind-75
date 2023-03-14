int maxProfit(int* prices, int pricesSize){
    
    int profit = 0;
    int min_prices = prices[0];
    for(int i = 0; i < pricesSize; i++){
        if(min_prices > prices[i]){
            min_prices = prices[i];
        }else{
            if(profit < (prices[i] - min_prices) ){
                
                profit = prices[i] - min_prices;
            } 
        }
    }

    return profit;
}
