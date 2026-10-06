class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();

        int x=n/3;


        unordered_map<int,int>mp;

        for(int x:nums){
            mp[x]++;
        }

        for(auto &p:mp){
            if(p.second>x){
                ans.push_back(p.first);
            }
        }
       return ans;;
    }
};
