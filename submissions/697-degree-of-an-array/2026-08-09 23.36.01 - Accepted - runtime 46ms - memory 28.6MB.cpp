class Solution {
public:
    int findShortestSubArray(vector<int>& nums){
        unordered_map<int,int>mp;


        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        
        }

        

        int degree=0;

        for(auto &x:mp){
            degree=max(degree,x.second);

        }
        int ans=nums.size();
        for(auto &x:mp){
            if(x.second==degree){
                 int index=0;
                    int p=0;
                    int count=0;
                for(int i=0;i<nums.size();i++){
                   
                    if(nums[i]==x.first){
                        count++;
                        if(count==1){
                        index=i;
                        }
                        if(count==x.second){
                            p=i;
                            break;
                        }
                    }
                }
                    ans=min(ans,p-index+1);
                
            }
        }return ans;
    }
};