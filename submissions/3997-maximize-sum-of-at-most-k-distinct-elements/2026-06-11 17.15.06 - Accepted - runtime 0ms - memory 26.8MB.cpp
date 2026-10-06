class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        vector<int> ans;
        for(int i=nums.size()-1;i>=0&&ans.size()<k;i--){
            ans.push_back(nums[i]);
        }
        return ans;
    }
};