class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string p=strs[0];
        string s="";

        for(int i=0;i<p.size();i++){
            for(int k=1;k<strs.size();k++){
                if(i>=strs[k].size()||p[i]!=strs[k][i]){
                    return s;}
            }
            s+=p[i];
        }
        return s;
    }
};





