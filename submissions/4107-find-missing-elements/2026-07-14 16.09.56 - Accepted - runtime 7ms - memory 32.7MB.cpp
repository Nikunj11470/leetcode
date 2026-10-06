class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int mini=INT_MAX;
        int maxi=-1;


       for(int i=0;i<nums.size();i++){
        mini=min(mini,nums[i]);
        maxi=max(maxi,nums[i]);
        
       }
       vector<int>ans;


       for(int i=mini;i<=maxi;i++){
        ans.push_back(i);
       }


       vector<int>s;

       for(int i=0;i<ans.size();i++){
        bool found=false;
        for(int j=0;j<nums.size();j++){
            if(ans[i]==nums[j]){
                found=true;
                break;
            }
        }
        if(!found){
            s.push_back(ans[i]);
        }
       }
       return s;
    }
};
