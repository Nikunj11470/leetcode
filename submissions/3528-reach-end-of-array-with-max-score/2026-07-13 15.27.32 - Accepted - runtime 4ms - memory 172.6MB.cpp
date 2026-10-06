class Solution {
public:
    long long findMaximumScore(vector<int>& nums) {
      long long ans=0;

      int maxi=nums[0];


      for(int i=1;i<nums.size();i++){
        ans+=maxi;

        maxi=max(maxi,nums[i]);
      }
      return ans;
    }
}
;

