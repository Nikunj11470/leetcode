class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int maxi=-1;
        unordered_set<int>st;

        for(int x:nums){
            st.insert(x);
        }
            for(int i=0;i<nums.size();i++){
                if(nums[i]>maxi && st.count(-nums[i])){
                    maxi=nums[i];
                }
            }

            return maxi;
    }
};


