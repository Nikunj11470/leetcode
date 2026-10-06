class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<pair<int,int>>v;


        for(int i=0;i<nums.size();i++){
            v.push_back({nums[i],i});
        }


        sort(v.begin(),v.end());

        vector<pair<int,int>>chosen;


        for(int i=v.size()-k;i<v.size();i++){
            chosen.push_back(v[i]);
        }

        sort(chosen.begin(),chosen.end(),[](pair<int,int>a,pair<int,int>b){
            return a.second<b.second;
        }
        );


        vector<int>ans;

        for(auto&p:chosen){
            ans.push_back(p.first);
        }
        return ans;
    }
};


