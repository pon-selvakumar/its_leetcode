class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=prices[0];
        int mxprofit=0;
        for(int i=0 ; i<prices.size();i++){
            if(buy>prices[i]) 
                buy=prices[i];
            else    
                mxprofit=max(mxprofit,prices[i]-buy);
        }
        return mxprofit;

    }
};