class Solution {
public:
    int maxSum(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){

            string s=to_string(nums[i]);
            int maxi=0;
            for(int j=0;j<s.size();j++){
                maxi=max(maxi,s[j]-'0');
            }

            ans.push_back(maxi);
        }
       

        int maxsum=-1;

        for(int i=0;i<ans.size()-1;i++){
            for(int j=i+1;j<ans.size();j++){
            if(ans[i]==ans[j]){
                maxsum=max(maxsum,nums[i]+nums[j]);
            }
        }
        }

        return maxsum;
    }
};

