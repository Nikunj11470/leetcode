class Solution {
public:
    int maximumProduct(vector<int>& nums, int k) {

        priority_queue<int,vector<int>,greater<int>>pq;

        for(int x:nums){
            pq.push(x);
        }

        while(k--){
            int x=pq.top();

            pq.pop();

            x++;
            pq.push(x);
        }

        long long mod=1e9+7;

        long long ans=1;

        while(!pq.empty()){
            ans=(ans*pq.top())%mod;

            pq.pop();
        }

        return ans;
    }
};

