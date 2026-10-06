class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;

        for(char c:s){
            mp[c]++;
        }
        vector<pair<char,int>>v;
        for(auto &p:mp){
            v.push_back(p);
        }

        sort(v.begin(),v.end(),[](pair<char,int> &a, pair<char,int> &b){
    return a.second > b.second;
        });


        string ans="";

        for(auto &p:v){
            ans.append(p.second,p.first);
        }
        return ans;
    }
};

