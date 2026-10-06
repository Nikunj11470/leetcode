class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
      int n=nums.size();
        int p=nums[(n-1)/2];
        int count=0;
        for(int i=0; i<nums.size();i++){
            if(p==nums[i]){
                count++;
            if(count>1){
                return false;
            }
            }
        }
        return true;
    }
};
