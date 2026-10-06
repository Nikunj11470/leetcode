class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;

        for(int p:arr){
            mp[p]++;
        }
        unordered_set<int>st;
        for(auto p:mp){
            st.insert(p.second);
        }

        if(st.size()==mp.size()){
            return true;
        }
        return false;
    }

};


