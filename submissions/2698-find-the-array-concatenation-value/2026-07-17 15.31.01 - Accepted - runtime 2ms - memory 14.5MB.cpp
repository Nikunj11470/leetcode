class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long sum=0;

        if(nums.size()==1){
            return nums[0];
        }


        int left=0;
        int right=nums.size()-1;

        
        while(left<right){
            string s = to_string(nums[left]) + to_string(nums[right]);

            sum += stoll(s);
            

            left++;
            right--;
        }

        if(left==right){
            sum+=nums[left];
        }


        return sum;
    }
};

