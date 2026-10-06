class Solution {
public:
    int dominantIndex(vector<int>& nums) {
       
       for(int i=0;i<nums.size();i++){
        bool ok=true;
        for(int j=0;j<nums.size() ;j++){
            if(i==j){
                continue;
            }
            if(nums[i]<2*nums[j]){
                ok=false;
                break;
            }
        }
        if(ok){
            return i;
        }
       }
       return -1;
    }
};

