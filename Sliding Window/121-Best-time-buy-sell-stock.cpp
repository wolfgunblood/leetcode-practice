class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int maxP = 0;
        int j=0;
        int len = prices.size();

        for(int i = 0;i<len;i++)
        {
            
            if(prices[i]>prices[j]){
                maxP = max(maxP,prices[i] - prices[j]);
            }else{
                j=i;
            }
        }

        return maxP;
    }
};