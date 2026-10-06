class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int q=n/2;
        unordered_map<int,int>mp;

        for(int x:nums){
            mp[x]++;
        }

        for(auto &p:mp){
            if(p.second>q){
                return p.first;
            }
        }


        return -1;
    }
};
