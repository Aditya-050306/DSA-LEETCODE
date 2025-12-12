class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;      //variable which stores maximum profit earned
        int bestbuy=prices[0];   //best price for buying i.e. minimum value
        for(int i=1;i<prices.size();i++){
            if(prices[i]>bestbuy){
                maxprofit=max(maxprofit,prices[i]-bestbuy);  //checks for max profit
            }
            bestbuy=min(bestbuy,prices[i]);   //upadtes value of best buy if prices[i] is less
        }
        return maxprofit;
    }
};