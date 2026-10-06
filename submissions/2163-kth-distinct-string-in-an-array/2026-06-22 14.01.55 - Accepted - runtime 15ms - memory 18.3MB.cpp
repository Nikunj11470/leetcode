class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>mp;

        for(string p:arr){
            mp[p]++;
        }
        int count=0;

        for(string p:arr){
            if(mp[p]==1){
                count++;

                if(count==k){
                    return p;
                }

            }
        }
        return "";
    }
};

