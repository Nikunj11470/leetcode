class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>mp1;

        unordered_map<char,int>mp2;

        for(char ch:ransomNote){
            mp1[ch]++;
        }

        for(char ch2:magazine){
            mp2[ch2]++;
        }

for(auto &x:mp1){
    if(x.second>mp2[x.first]){
        return false;
    }
}

return true;
    }
};

