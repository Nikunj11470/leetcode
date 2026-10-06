class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
       unordered_map<string,int>mp;

       unordered_set ban(banned.begin(),banned.end());

       for(char &ch:paragraph){
        if(isalpha(ch)){
            ch=tolower(ch);
        }
        else{
            ch=' ';
        }
       }


       stringstream ss(paragraph);

       string word;

       while(ss>>word){
        if(ban.find(word)==ban.end()){
            mp[word]++;
        }
       }


       int maxi=0;

       string ans;

       for(auto p:mp){
        if(p.second>maxi){
            maxi=p.second;
            ans=p.first;
        }
       }


       return ans;
    }
};


