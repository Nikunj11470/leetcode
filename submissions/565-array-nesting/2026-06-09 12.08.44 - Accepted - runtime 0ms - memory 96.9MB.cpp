class Solution {
public:
    int arrayNesting(vector<int>& nums){
        vector<bool> visited(nums.size(), false);
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int count=0;
            

            while(!visited[i]){
                visited[i]=true;
                i=nums[i];
                count++;
            }
            ans=max(ans,count);

        }
        return ans;
    }
};

