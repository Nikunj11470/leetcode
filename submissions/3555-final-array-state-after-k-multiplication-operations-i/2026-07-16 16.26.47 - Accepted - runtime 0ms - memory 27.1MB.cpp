class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
       for(int p=1;p<=k;p++){
        int index=-1;
        int mini=INT_MAX;

        for(int i=0;i<nums.size();i++){
            if(nums[i]<mini){
                mini=nums[i];
                index=i;
            }
        }


        nums[index]*=multiplier;
       }
       return nums;
    }
};
