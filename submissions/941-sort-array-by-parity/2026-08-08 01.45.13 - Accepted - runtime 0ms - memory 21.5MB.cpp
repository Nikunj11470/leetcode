class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>ans;
        vector<int>p;

        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                ans.push_back(nums[i]);
            }
            else{
                p.push_back(nums[i]);
            }
        }

        vector<int>m;

        for(int i=0;i<ans.size();i++){
            m.push_back(ans[i]);
        }

        for(int i=0;i<p.size();i++){
            m.push_back(p[i]);
        }

        return m;
    }
};

