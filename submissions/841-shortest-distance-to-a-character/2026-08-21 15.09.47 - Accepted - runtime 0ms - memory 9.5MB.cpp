class Solution {
public:
    vector<int> shortestToChar(string s, char c) {

        vector<int>ans(s.size());
       for(int i=0;i<s.size();i++){
       int left=INT_MAX;
       int right=INT_MAX;

        for(int j=i;j<s.size();j++){
            
            if(s[j]==c ){
                right=j-i;
                break;
            }
        }

        for(int k=i;k>=0;k--){
            if(s[k]==c){
                left=i-k;
                break;
            }
        }

        ans[i]=min(left,right);
       }

       return ans;
    }
};
