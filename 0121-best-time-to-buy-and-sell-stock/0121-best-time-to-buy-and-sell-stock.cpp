class Solution {
public:
    int maxProfit(vector<int>& prices) {
		int purchasedStock = prices[0];
        int maxProfit=0;

		for(int i=1;i<prices.size();i++){

			if(prices[i]>purchasedStock){
				maxProfit = max(maxProfit, prices[i] - purchasedStock);
			}
			else{
				purchasedStock = prices[i];
			}
		}
        return maxProfit;
        
    }
};