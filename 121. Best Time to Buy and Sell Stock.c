int maxProfit(int* prices, int pricesSize) {
    int max=0,profit=0,buy=prices[0];
    for(int i=0;i<pricesSize;i++){
        buy = buy<prices[i]?buy:prices[i];
        if(prices[i]>buy){
            max = max>(prices[i]-buy) ? max : prices[i]-buy;
        }
    }
    return max;
}