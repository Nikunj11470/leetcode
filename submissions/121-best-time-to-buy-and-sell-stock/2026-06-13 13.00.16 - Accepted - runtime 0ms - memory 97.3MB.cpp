class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int maxprofit=0;
        int p=prices[0];

        for(int i=1;i<prices.size();i++){
            p=min(p,prices[i]);
            int m=prices[i]-p;

            maxprofit=max(m,maxprofit);

        }
        return maxprofit;
    }
};

