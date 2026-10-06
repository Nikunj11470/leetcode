class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int,int>mp;

        for(int x:nums){
            mp[x]++;
        }


        unordered_map<int,int>freq;

        for(auto&p:mp){
            freq[p.second]++;
        }

        for(int x:nums){
            if(freq[mp[x]]==1){
                return x;
            }
        }
        return -1;
    }
};

