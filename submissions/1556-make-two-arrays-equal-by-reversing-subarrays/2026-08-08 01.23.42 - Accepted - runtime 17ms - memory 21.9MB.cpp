class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_set<int>st;
        unordered_map<int,int>mp;

        
        for(int x:target){
            st.insert(x);
            mp[x]++;
        }
        unordered_map<int,int>m;
        for(int x:arr){
            m[x]++;
        }
        for(int x:arr){
            if(!st.count(x)){
                return false;
            }
            else{
                if(mp[x]!=m[x]){
                    return false;
                }
            }
        }
        return true;
    }
}


;

