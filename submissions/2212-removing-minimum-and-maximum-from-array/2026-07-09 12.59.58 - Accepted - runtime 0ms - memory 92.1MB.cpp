class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mini = INT_MAX;
        int maxi = INT_MIN;

        for(int i = 0; i < nums.size(); i++){
            maxi = max(maxi, nums[i]);
            mini = min(mini, nums[i]);
        }

        int p = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == maxi){
                p = i + 1;
                break;
            }
        }

        int q = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == mini){
                q = i + 1;
                break;
            }
        }

        int r = 0;
        for(int i = nums.size()-1; i >= 0; i--){
            if(nums[i] == maxi){
                r = nums.size() - i;
                break;
            }
        }

        int s = 0;
        for(int i = nums.size()-1; i >= 0; i--){
            if(nums[i] == mini){
                s = nums.size() - i;
                break;
            }
        }

        int op1 = max(p, q);
        int op2 = max(r, s);
        int op3 = min(p + s, q + r);

        return min({op1, op2, op3});
    }
};