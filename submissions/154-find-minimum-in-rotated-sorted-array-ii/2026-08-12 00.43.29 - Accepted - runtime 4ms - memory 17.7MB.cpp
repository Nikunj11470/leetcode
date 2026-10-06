class Solution {
public:
    int findMin(vector<int>& nums) {
        unordered_set<int>s;


        for(int x:nums){
            s.insert(x);
        }
        vector<int>st;

        for(int x:s){
            st.push_back(x);
        }


        sort(st.begin(),st.end());


        return st[0];
    }
};
