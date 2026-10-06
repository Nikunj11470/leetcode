class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int>mp;
        string ans="";

        for(char c:s){
            mp[c]++;
        }

        for(char c:order){
            while(mp[c]>0){
                ans.push_back(c);
                mp[c]--;
            }
        }

        for(auto &p:mp){
            while(p.second){
                ans.push_back(p.first);
                p.second--;
            }
        }
        return ans;
    }
};
