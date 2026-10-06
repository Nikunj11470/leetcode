class Solution {
public:
    bool makeEqual(vector<string>& words) {
        unordered_map<char,int>mp;

        for(string word:words){
            for(char ch:word){
                mp[ch]++;
            }
        };

        int n=words.size();
        for(auto &p:mp){
            if(p.second %n !=0){
                return false;
            }
        }return true;
    }
};


