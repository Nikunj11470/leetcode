class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int>mp;
        int sum=0;
        for(char ch:chars){
            mp[ch]++;
        }
        
       for(int i=0;i<words.size();i++){
           unordered_map<char,int>mp1;
           int flag=true;
          for(int j=0;j<words[i].size();j++){
              char ch=words[i][j];
               mp1[ch]++;
               if(mp[ch]<mp1[ch]){
                   flag=false;
                   
               }
          }
           if(flag){
           sum+=words[i].size();
           }
       }
        
        return sum;
    }
};
