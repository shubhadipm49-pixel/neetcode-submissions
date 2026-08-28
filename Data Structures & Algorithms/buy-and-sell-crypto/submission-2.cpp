class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0, r = 0;
        int maxProfit = 0;

        while(r < prices.size()){
            if(prices[l]< prices[r]){
               int res = prices[r]-prices[l];
                maxProfit = max(res,maxProfit);
            }
            else{
                l = r;
            }
            r++;
        }
        return maxProfit;
       
    }
};
