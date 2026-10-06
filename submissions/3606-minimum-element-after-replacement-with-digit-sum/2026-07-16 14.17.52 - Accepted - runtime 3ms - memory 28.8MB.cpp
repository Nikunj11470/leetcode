class Solution {
public:

    int minElement(vector<int>& nums) {

        
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
        int sum=0;
            string s=to_string(nums[i]);

            for(int j=0;j<s.size();j++){

            sum+=s[j]-'0';

            }
            ans.push_back(sum);
            }


            sort(ans.begin(),ans.end());
            

            return ans[0];
            }
            };


