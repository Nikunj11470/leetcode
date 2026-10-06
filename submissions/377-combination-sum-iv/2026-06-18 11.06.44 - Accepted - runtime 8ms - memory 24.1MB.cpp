class Solution {
public:
vector <int> dp;

int counting(vector<int>nums,int target){
    if(target==0){
        return 1;
    }
    int count=0;
    if(dp[target]!=-1){
        return dp[target];
    }

    for(int i=0;i<nums.size();i++){
        if(nums[i]<=target){
            count+=counting(nums,target-nums[i]);
        }
    }
    return dp[target]=count;
}



    int combinationSum4(vector<int>& nums, int target) {

        dp.resize(target+1,-1);
        return counting(nums,target);
    }
};
