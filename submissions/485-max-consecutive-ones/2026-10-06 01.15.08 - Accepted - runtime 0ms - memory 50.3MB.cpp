class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int maxi = 0;

        for(int i = 0; i < nums.size(); i++) {

            if(nums[i] == 1) {

                int count = 1;

                for(int j = i + 1; j < nums.size(); j++) {

                    if(nums[j] == 1) {
                        count++;
                    }
                    else {
                        i = j;
                        break;
                    }

                    if(j == nums.size() - 1) {
                        i = j;
                    }
                }

                maxi = max(maxi, count);
            }
        }

        return maxi;
    }
};