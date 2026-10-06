class Solution {
public:
    char findTheDifference(string s, string t) {

        char ans=0;

        vector<bool>used(s.size(),false);

        for(int i=0;i<t.size();i++){
            bool found=false;

            for(int j=0;j<s.size();j++){
                if (s[j] == t[i] && used[j] == false) {
                    used[j]=true;
                    found=true;
                    break;
                }
            }

            if(!found){
                ans=t[i];
                break;
            }
        }

        return ans;
    }
};
