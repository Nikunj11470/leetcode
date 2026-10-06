class Solution {
public:
    bool reportSpam(vector<string>& message, vector<string>& bannedWords) {
        int count=0;

        unordered_set<string>st(bannedWords.begin(),bannedWords.end());

        for(string &word:message){
            if(st.count(word)){
                count++;
                if(count>=2){
                    return true;
                }
            }
        }
        return false;
    }
};


      