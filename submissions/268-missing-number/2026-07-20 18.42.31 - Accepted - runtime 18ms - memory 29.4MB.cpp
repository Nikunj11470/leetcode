class Solution {
public:
    int missingNumber(vector<int>& nums) {

        unordered_set<int>st;

        for(int p:nums){
            st.insert(p);
        
        }
        
        int n=nums.size();
        vector<int>ans;
        for(int i=0;i<=n;i++){
            ans.push_back(i);
        }
        for(int x:ans){https://leetcode.com/subscribe/?ref=qd3_cs&slug=missing-number$0

            if(!st.count(x)){
                return x;
            }
        }
        return -1;
    }
};