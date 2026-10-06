class Solution {
public:
    int maxProduct(vector<int>& nums) {
       int sum=-1;
        for(int i=0;i<nums.size();i++){
            
            for(int j=0;j<nums.size();j++){
                if(i!=j){
                    int p=(nums[i]-1)*(nums[j]-1);
                    sum=max(sum,p);
                }
            }
        }
        return sum;
    }
};


