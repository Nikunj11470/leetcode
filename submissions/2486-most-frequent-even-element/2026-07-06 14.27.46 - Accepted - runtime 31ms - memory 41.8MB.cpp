class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int>mp;

        for(int x:nums){
            if(x%2==0){
            mp[x]++;
            }
        }

        if(mp.empty()){
            return -1;
        }

        int ans=-1;
        int maxi=0;


        for( auto i:mp){
            int freq=i.second;
            int num=i.first;


            if(freq>maxi){
                maxi=freq;

                ans=num;
            }

            else if(freq==maxi && num<ans){
                ans=num;
            }
        }
        return ans;
    }
};

