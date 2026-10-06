class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        

        unordered_map<char,int>st;

        for(char c:word1){
            st[c]++;
        }
        unordered_map<char,int>st1;
        for(char c:word2){
            st1[c]++;
        }


        for(char c='a';c<='z';c++){
            int p=st[c];

            int q=st1[c];

            int freq=abs(p-q);

            if(freq>3){
                return false;
            }
        }

        return true;
    }
};

