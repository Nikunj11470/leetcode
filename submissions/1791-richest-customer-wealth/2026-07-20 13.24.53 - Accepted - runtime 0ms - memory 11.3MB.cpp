class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum=0;
        for(int i=0;i<accounts[0].size();i++){
            sum+=accounts[0][i];
        }

        

        for(int i=1;i<accounts.size();i++){
            int maxSum=0;
            for(int j=0;j<accounts[i].size();j++){
                maxSum+=accounts[i][j];
            }
            if(maxSum>sum){
                sum=maxSum;
            }
        }

        return sum;
    }
};

