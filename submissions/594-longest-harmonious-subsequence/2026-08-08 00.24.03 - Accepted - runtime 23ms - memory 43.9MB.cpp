class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int x:nums){
            mp[x]++;
        }
        int ans=0;
        for(auto &x:mp){
            int num=x.first;

            if(mp.count(num+1)){
                ans=max(ans,x.second+mp[num+1]);
            }
        }
        return ans;
    }
};


