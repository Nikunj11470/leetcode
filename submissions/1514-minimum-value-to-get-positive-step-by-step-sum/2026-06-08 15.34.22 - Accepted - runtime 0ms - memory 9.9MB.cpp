class Solution {
public:
    int minStartValue(vector<int>& nums) {
    int sum=0;
    int minPrefix=0;
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        minPrefix=min(minPrefix,sum);

    }

    return 1-minPrefix;
    }
};
