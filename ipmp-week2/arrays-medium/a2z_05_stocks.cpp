int maxProfit(int* prices, int pricesSize) {
    int min=prices[0],k,profit=0;
    for(int i=1;i<pricesSize;i++)
    {
        k=prices[i]-min;
        profit=profit<k?k:profit;
        min=prices[i]<min?prices[i]:min;
    }
    return profit;
}