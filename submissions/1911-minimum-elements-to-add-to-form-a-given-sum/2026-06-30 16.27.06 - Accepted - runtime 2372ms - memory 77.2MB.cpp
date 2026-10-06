class Solution {
public:
    int minElements(vector<int>& nums, int limit, int goal) {
        long long sum=0;

        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }

        long long p=abs((long long)goal-sum);
        int count=0;
        while(p>0){
            p-=limit;
            count++;
        }

        return count;
    }
};

