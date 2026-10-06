class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int>mp;

        for(char ch:s){
            mp[ch]++;
        }

        int freq=mp.begin()->second;

        for(auto s:mp){
            if(s.second!=freq){
                return false;
            }
        }
        return true;
    }
};


