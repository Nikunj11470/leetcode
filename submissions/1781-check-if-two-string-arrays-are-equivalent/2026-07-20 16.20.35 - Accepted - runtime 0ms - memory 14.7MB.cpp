class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string binary="";
        for(int i=0;i<word1.size();i++){
            binary+=word1[i];
        }
        string b="";

        for(int i=0;i<word2.size();i++){
            b+=word2[i];
        }

        if(binary==b){
            return true;
        }

        return false;
    }

};
